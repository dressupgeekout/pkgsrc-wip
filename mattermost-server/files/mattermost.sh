#!@RCD_SCRIPTS_SHELL@
#
# $NetBSD$
#
# PROVIDE: mattermost
# REQUIRE: NETWORKING
# BEFORE:  LOGIN
# KEYWORD: shutdown

name="mattermost"

command="@PREFIX@/sbin/daemonize"

pidfile="@VARBASE@/run/${name}/${name}.pid"

task="@PREFIX@/sbin/${name}"
procname="${task}"

command_args="-p ${pidfile} \
    -u @MATTERMOST_USER@ \
    -c @MATTERMOST_DATADIR@ \
    -e @MATTERMOST_LOGDIR@/daemonize.stderr \
    -o @MATTERMOST_LOGDIR@/daemonize.stdout"

mattermost_precmd()
{
        if [ ! -e "@VARBASE@/run/${name}" ] ; then
                install -d -o @MATTERMOST_USER@ -g @MATTERMOST_GROUP@ \
		    @VARBASE@/run/${name};
        fi
}

if [ -f @SYSCONFBASE@/rc.subr ]; then
    	. @SYSCONFBASE@/rc.subr

	rcvar=${name}
	required_files="@PKG_SYSCONFDIR@/config.json"
	pidfile="@VARBASE@/run/${name}/${name}.pid"

	start_precmd="mattermost_precmd"

	load_rc_config ${name}
	run_rc_command "$1"
else
        @ECHO@ -n " ${name}"
	mattermost_precmd
	${command} ${command_args}
fi
