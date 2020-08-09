# $NetBSD$

DISTNAME=	zesarux-${GITHUB_TAG}
CATEGORIES=	emulators
MASTER_SITES=	${MASTER_SITE_GITHUB:=chernandezba/}
GITHUB_PROJECT=	zesarux
GITHUB_TAG=	8.2-21052020

MAINTAINER=	cfkoch@edgebsd.org
HOMEPAGE=	https://minio.io/
COMMENT=	ZX Spectrum emulator
LICENSE=	apache-2.0 # XXX

EXTRACT_USING=	gtar

CONFIG_SHELL=	bash
HAS_CONFIGURE=	yes

WRKSRC=	${WRKDIR}/${GITHUB_PROJECT}-${GITHUB_TAG}/src

CONFIGURE_ARGS+=	--prefix=${PREFIX}
CONFIGURE_ARGS+=	--disable-stdout             #Disable stdout driver
CONFIGURE_ARGS+=	--disable-simpletext         #Disable simpletext driver
CONFIGURE_ARGS+=	--disable-curses             #Disable curses driver
CONFIGURE_ARGS+=	--disable-cursesw            #Disable cursesw driver (extended characters)
CONFIGURE_ARGS+=	--disable-aa                 #Disable aalib driver
CONFIGURE_ARGS+=	--disable-caca               #Disable cacalib driver
CONFIGURE_ARGS+=	--disable-xwindows           #Disable xwindows driver
CONFIGURE_ARGS+=	--disable-xext               #Disable xwindows extensions
CONFIGURE_ARGS+=	--disable-xvidmode           #Disable xwindows vidmode extensions
#CONFIGURE_ARGS+=	--disable-sdl                #Disable SDL video & audio driver
CONFIGURE_ARGS+=	--disable-fbdev              #Disable framebuffer driver
CONFIGURE_ARGS+=	--disable-dsp                #Disable audio dsp driver
CONFIGURE_ARGS+=	--disable-alsa               #Disable audio alsa driver
CONFIGURE_ARGS+=	--disable-pulse              #Disable pulseaudio driver
CONFIGURE_ARGS+=	--disable-coreaudio          #Disable Coreaudio Mac OS X audio
CONFIGURE_ARGS+=	--disable-sndfile            #Disable sndfile functions
CONFIGURE_ARGS+=	--disable-pthreads           #Disable using posix threads
CONFIGURE_ARGS+=	--disable-cocoa              #Disable Cocoa Mac OS X native GUI
CONFIGURE_ARGS+=	--disable-linuxrealjoystick  #Disable linux real joystick support
#CONFIGURE_ARGS+=	--enable-memptr              #Enable MEMPTR emulation
#CONFIGURE_ARGS+=	--enable-undoc-scfccf        #Enable SCF/CCF undocumented flags emulation
#CONFIGURE_ARGS+=	--enable-visualmem           #Enable visual memory option on menu
#CONFIGURE_ARGS+=	--enable-cpustats            #Enable CPU statistics option on menu
#CONFIGURE_ARGS+=	--enable-raspberry          # Enable Raspberry extensions
#CONFIGURE_ARGS+=	--enable-sdl2               # 
#CONFIGURE_ARGS+=	--enable-ssl                  #Enable ssl functions
CONFIGURE_ARGS+=	--disable-contend             #Disable Contended Memory emulation
CONFIGURE_ARGS+=	--disable-putpixel-cache      #Disable putpixel cache. Test feature
#CONFIGURE_ARGS+=	--spectrum-reduced-core      Use reduced Spectrum core by default, recommended for slow devices like Raspberry Pi 1 and Zero. You can also switch it from command line or menu

.include "../../devel/SDL/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
