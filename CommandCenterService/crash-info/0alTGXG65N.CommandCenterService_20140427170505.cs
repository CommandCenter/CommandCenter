S/W Version Information
Model: Ref.Device-PQ
Tizen-Version: 2.2.1
Build-Number: Tizen_Ref.Device-PQ_20131118.1124
Build-Date: 2013.11.18 11:24:59

Crash Information
Process Name: CommandCenterService
PID: 20349
Date: 2014-04-27 17:05:05(GMT+0900)
Executable File Path: /opt/apps/0alTGXG65N/bin/CommandCenterService
Signal: 11
      (SIGSEGV)
      si_code: -6
      signal sent by tkill (sent by pid 20349, uid 5000)

Register Information
r0   = 0x00000000, r1   = 0x000b1498
r2   = 0x00007980, r3   = 0x002b7d68
r4   = 0x00000000, r5   = 0x000b14a4
r6   = 0x00000000, r7   = 0x00000152
r8   = 0xb1c44470, r9   = 0xb2443cec
r10  = 0x00000000, fp   = 0xb1c43d88
ip   = 0xb3ad7ffd, sp   = 0xb1c43d70
lr   = 0xb269fa1c, pc   = 0xb3ad8002
cpsr = 0x60000030

Memory Information
MemTotal:   797320 KB
MemFree:    232816 KB
Buffers:     14068 KB
Cached:     307640 KB
VmPeak:     105504 KB
VmSize:      96788 KB
VmLck:           0 KB
VmHWM:       21268 KB
VmRSS:       13444 KB
VmData:      24580 KB
VmStk:         136 KB
VmExe:          32 KB
VmLib:       43428 KB
VmPTE:          68 KB
VmSwap:          0 KB

Maps Information
00008000 00010000 r-xp /usr/bin/launchpad_preloading_preinitializing_daemon
00018000 000dc000 rw-p [heap]
000dc000 00151000 rw-p [heap]
b253a000 b254e000 r-xp /usr/lib/libnetwork.so.0.0.0
b2557000 b256b000 r-xp /usr/lib/libwifi-direct.so.0.0
b2573000 b257b000 r-xp /usr/lib/libcapi-network-tethering.so.0.1.0
b257c000 b2585000 r-xp /usr/lib/libcapi-network-connection.so.0.1.3_18
b258d000 b2652000 r-xp /usr/lib/osp/libosp-net.so.1.2.2.0
b2660000 b267d000 r-xp /usr/lib/osp/libosp-image.so.1.2.2.0
b2698000 b26a5000 r-xp /opt/usr/apps/0alTGXG65N/bin/CommandCenterService.exe
b26b1000 b2723000 r-xp /usr/lib/libosp-env-config.so.1.2.2.1
b272b000 b2765000 r-xp /usr/lib/libpulsecommon-0.9.23.so
b276e000 b2772000 r-xp /usr/lib/libmmfsoundcommon.so.0.0.0
b277a000 b27ab000 r-xp /usr/lib/libpulse.so.0.12.4
b27b3000 b2816000 r-xp /usr/lib/libasound.so.2.0.0
b2820000 b2823000 r-xp /usr/lib/libpulse-simple.so.0.0.3
b282b000 b282f000 r-xp /usr/lib/libascenario-0.2.so.0.0.0
b2838000 b2855000 r-xp /usr/lib/libavsysaudio.so.0.0.1
b285d000 b286b000 r-xp /usr/lib/libmmfsound.so.0.1.0
b2873000 b290f000 r-xp /usr/lib/libgstreamer-0.10.so.0.30.0
b291b000 b295c000 r-xp /usr/lib/libgstbase-0.10.so.0.30.0
b2965000 b296e000 r-xp /usr/lib/libgstapp-0.10.so.0.25.0
b2976000 b2983000 r-xp /usr/lib/libgstinterfaces-0.10.so.0.25.0
b298c000 b2992000 r-xp /usr/lib/libUMP.so
b299a000 b299d000 r-xp /usr/lib/libmm_ta.so.0.0.0
b29a5000 b29b4000 r-xp /usr/lib/libICE.so.6.3.0
b29be000 b29c3000 r-xp /usr/lib/libSM.so.6.0.1
b29cb000 b29cc000 r-xp /usr/lib/libmmfkeysound.so.0.0.0
b29d4000 b29dc000 r-xp /usr/lib/libmmfcommon.so.0.0.0
b29e4000 b29ec000 r-xp /usr/lib/libaudio-session-mgr.so.0.0.0
b29f7000 b29fa000 r-xp /usr/lib/libmmfsession.so.0.0.0
b2a02000 b2a46000 r-xp /usr/lib/libmmfplayer.so.0.0.0
b2a4f000 b2a62000 r-xp /usr/lib/libEGL_platform.so
b2a6b000 b2b42000 r-xp /usr/lib/libMali.so
b2b4d000 b2b53000 r-xp /usr/lib/libxcb-render.so.0.0.0
b2b5b000 b2b5c000 r-xp /usr/lib/libxcb-shm.so.0.0.0
b2b65000 b2ba3000 r-xp /usr/lib/libGLESv2.so.2.0
b2bab000 b2bf6000 r-xp /usr/lib/libtiff.so.5.1.0
b2c01000 b2c2a000 r-xp /usr/lib/libturbojpeg.so
b2c43000 b2c49000 r-xp /usr/lib/libmmutil_imgp.so.0.0.0
b2c51000 b2c57000 r-xp /usr/lib/libgif.so.4.1.6
b2c5f000 b2c81000 r-xp /usr/lib/libavutil.so.51.73.101
b2c90000 b2cbe000 r-xp /usr/lib/libswscale.so.2.1.101
b2cc7000 b2fbe000 r-xp /usr/lib/libavcodec.so.54.59.100
b32e5000 b32fe000 r-xp /usr/lib/libpng12.so.0.50.0
b3307000 b330d000 r-xp /usr/lib/libfeedback.so.0.1.4
b3315000 b3321000 r-xp /usr/lib/libtts.so
b3329000 b3340000 r-xp /usr/lib/libEGL.so.1.4
b3349000 b3400000 r-xp /usr/lib/libcairo.so.2.11200.12
b340a000 b3424000 r-xp /usr/lib/osp/libosp-image-core.so.1.2.2.0
b342d000 b3d28000 r-xp /usr/lib/osp/libosp-uifw.so.1.2.2.1
b3d9b000 b3da0000 r-xp /usr/lib/libslp_devman_plugin.so
b3da9000 b3dac000 r-xp /usr/lib/libsyspopup_caller.so.0.1.0
b3db4000 b3db8000 r-xp /usr/lib/libsysman.so.0.2.0
b3dc0000 b3dd1000 r-xp /usr/lib/libsecurity-server-commons.so.1.0.0
b3dda000 b3ddc000 r-xp /usr/lib/libsystemd-daemon.so.0.0.1
b3de4000 b3de6000 r-xp /usr/lib/libdeviced.so.0.1.0
b3dee000 b3e04000 r-xp /usr/lib/libpkgmgr_parser.so.0.1.0
b3e0c000 b3e0e000 r-xp /usr/lib/libpkgmgr_installer_status_broadcast_server.so.0.1.0
b3e16000 b3e19000 r-xp /usr/lib/libpkgmgr_installer_client.so.0.1.0
b3e21000 b3e24000 r-xp /usr/lib/libdevice-node.so.0.1
b3e2c000 b3e30000 r-xp /usr/lib/libheynoti.so.0.0.2
b3e38000 b3e7d000 r-xp /usr/lib/libsoup-2.4.so.1.5.0
b3e86000 b3e9b000 r-xp /usr/lib/libsecurity-server-client.so.1.0.1
b3ea4000 b3ea8000 r-xp /usr/lib/libcapi-system-info.so.0.2.0
b3eb0000 b3eb5000 r-xp /usr/lib/libcapi-system-system-settings.so.0.0.2
b3ebd000 b3ebe000 r-xp /usr/lib/libcapi-system-power.so.0.1.1
b3ec7000 b3eca000 r-xp /usr/lib/libcapi-system-device.so.0.1.0
b3ed2000 b3ed5000 r-xp /usr/lib/libcapi-system-runtime-info.so.0.0.3
b3ede000 b3ee1000 r-xp /usr/lib/libcapi-network-serial.so.0.0.8
b3ee9000 b3eea000 r-xp /usr/lib/libcapi-content-mime-type.so.0.0.2
b3ef2000 b3f00000 r-xp /usr/lib/libcapi-appfw-application.so.0.1.0
b3f09000 b3f2b000 r-xp /usr/lib/libSLP-tapi.so.0.0.0
b3f33000 b3f36000 r-xp /usr/lib/libuuid.so.1.3.0
b3f3f000 b3f5d000 r-xp /usr/lib/libpkgmgr-info.so.0.0.17
b3f65000 b3f7c000 r-xp /usr/lib/libpkgmgr-client.so.0.1.68
b3f85000 b3f86000 r-xp /usr/lib/libpmapi.so.1.2
b3f8e000 b3f96000 r-xp /usr/lib/libminizip.so.1.0.0
b3f9e000 b3fa9000 r-xp /usr/lib/libmessage-port.so.1.2.2.1
b3fb1000 b4089000 r-xp /usr/lib/libxml2.so.2.7.8
b4096000 b40b4000 r-xp /usr/lib/libpcre.so.0.0.1
b40bc000 b40bf000 r-xp /usr/lib/libiniparser.so.0
b40c8000 b40cc000 r-xp /usr/lib/libhaptic.so.0.1
b40d4000 b40df000 r-xp /usr/lib/libcryptsvc.so.0.0.1
b40ec000 b40f1000 r-xp /usr/lib/libdevman.so.0.1
b40fa000 b40fe000 r-xp /usr/lib/libchromium.so.1.0
b4106000 b410c000 r-xp /usr/lib/libappsvc.so.0.1.0
b4114000 b4115000 r-xp /usr/lib/osp/libappinfo.so.1.2.2.1
b4125000 b4127000 r-xp /opt/usr/apps/0alTGXG65N/bin/CommandCenterService
b412f000 b4135000 r-xp /usr/lib/libalarm.so.0.0.0
b413e000 b4150000 r-xp /usr/lib/libprivacy-manager-client.so.0.0.5
b4158000 b4457000 r-xp /usr/lib/osp/libosp-appfw.so.1.2.2.1
b447e000 b4488000 r-xp /lib/libnss_files-2.13.so
b4491000 b449a000 r-xp /lib/libnss_nis-2.13.so
b44a3000 b44b4000 r-xp /lib/libnsl-2.13.so
b44bf000 b44c5000 r-xp /lib/libnss_compat-2.13.so
b44ce000 b44d7000 r-xp /usr/lib/libcapi-security-privilege-manager.so.0.0.3
b47ff000 b4810000 r-xp /usr/lib/libcom-core.so.0.0.1
b4818000 b481a000 r-xp /usr/lib/libdri2.so.0.0.0
b4822000 b482a000 r-xp /usr/lib/libdrm.so.2.4.0
b4832000 b4836000 r-xp /usr/lib/libtbm.so.1.0.0
b483e000 b4841000 r-xp /usr/lib/libXv.so.1.0.0
b4849000 b4914000 r-xp /usr/lib/libscim-1.0.so.8.2.3
b492a000 b493a000 r-xp /usr/lib/libnotification.so.0.1.0
b4942000 b4966000 r-xp /usr/lib/ecore/immodules/libisf-imf-module.so
b496f000 b497f000 r-xp /lib/libresolv-2.13.so
b4983000 b4985000 r-xp /usr/lib/libgmodule-2.0.so.0.3200.3
b498d000 b4ae0000 r-xp /usr/lib/libcrypto.so.1.0.0
b4afe000 b4b4a000 r-xp /usr/lib/libssl.so.1.0.0
b4b56000 b4b82000 r-xp /usr/lib/libidn.so.11.5.44
b4b8b000 b4b95000 r-xp /usr/lib/libcares.so.2.0.0
b4b9d000 b4bb4000 r-xp /lib/libexpat.so.1.5.2
b4bbe000 b4be2000 r-xp /usr/lib/libicule.so.48.1
b4beb000 b4bf3000 r-xp /usr/lib/libsf_common.so
b4bfb000 b4c96000 r-xp /usr/lib/libstdc++.so.6.0.14
b4ca9000 b4d86000 r-xp /usr/lib/libgio-2.0.so.0.3200.3
b4d91000 b4db6000 r-xp /usr/lib/libexif.so.12.3.3
b4dca000 b4dd4000 r-xp /usr/lib/libethumb.so.1.7.99
b4ddc000 b4e20000 r-xp /usr/lib/libsndfile.so.1.0.25
b4e2e000 b4e30000 r-xp /usr/lib/libctxdata.so.0.0.0
b4e38000 b4e46000 r-xp /usr/lib/libremix.so.0.0.0
b4e4e000 b4e4f000 r-xp /usr/lib/libecore_imf_evas.so.1.7.99
b4e57000 b4e70000 r-xp /usr/lib/liblua-5.1.so
b4e79000 b4e80000 r-xp /usr/lib/libembryo.so.1.7.99
b4e89000 b4e8c000 r-xp /usr/lib/libecore_input_evas.so.1.7.99
b4e94000 b4ed1000 r-xp /usr/lib/libcurl.so.4.3.0
b4edb000 b4edf000 r-xp /usr/lib/libecore_ipc.so.1.7.99
b4ee8000 b4f52000 r-xp /usr/lib/libpixman-1.so.0.28.2
b4f5f000 b4f83000 r-xp /usr/lib/libfontconfig.so.1.5.0
b4f8c000 b4fe8000 r-xp /usr/lib/libharfbuzz.so.0.907.0
b4ffa000 b500e000 r-xp /usr/lib/libfribidi.so.0.3.1
b5016000 b506b000 r-xp /usr/lib/libfreetype.so.6.8.1
b5076000 b509a000 r-xp /usr/lib/libjpeg.so.8.0.2
b50b2000 b50c9000 r-xp /lib/libz.so.1.2.5
b50d1000 b50de000 r-xp /usr/lib/libsensor.so.1.1.0
b50e9000 b50eb000 r-xp /usr/lib/libapp-checker.so.0.1.0
b50f3000 b50f9000 r-xp /usr/lib/libxdgmime.so.1.1.0
b6210000 b62f8000 r-xp /usr/lib/libicuuc.so.48.1
b6305000 b6425000 r-xp /usr/lib/libicui18n.so.48.1
b6433000 b6436000 r-xp /usr/lib/libSLP-db-util.so.0.1.0
b643e000 b6447000 r-xp /usr/lib/libvconf.so.0.2.45
b644f000 b645d000 r-xp /usr/lib/libail.so.0.1.0
b6465000 b647d000 r-xp /usr/lib/libdbus-glib-1.so.2.2.2
b647e000 b6483000 r-xp /usr/lib/libffi.so.5.0.10
b648b000 b648c000 r-xp /usr/lib/libgthread-2.0.so.0.3200.3
b6494000 b649e000 r-xp /usr/lib/libXext.so.6.4.0
b64a7000 b64aa000 r-xp /usr/lib/libXtst.so.6.1.0
b64b2000 b64b8000 r-xp /usr/lib/libXrender.so.1.3.0
b64c0000 b64c6000 r-xp /usr/lib/libXrandr.so.2.2.0
b64ce000 b64cf000 r-xp /usr/lib/libXinerama.so.1.0.0
b64d8000 b64e1000 r-xp /usr/lib/libXi.so.6.1.0
b64e9000 b64ec000 r-xp /usr/lib/libXfixes.so.3.1.0
b64f4000 b64f6000 r-xp /usr/lib/libXgesture.so.7.0.0
b64fe000 b6500000 r-xp /usr/lib/libXcomposite.so.1.0.0
b6508000 b6509000 r-xp /usr/lib/libXdamage.so.1.1.0
b6512000 b6519000 r-xp /usr/lib/libXcursor.so.1.0.2
b6521000 b6529000 r-xp /usr/lib/libemotion.so.1.7.99
b6531000 b654c000 r-xp /usr/lib/libecore_con.so.1.7.99
b6555000 b655a000 r-xp /usr/lib/libecore_imf.so.1.7.99
b6563000 b656b000 r-xp /usr/lib/libethumb_client.so.1.7.99
b6573000 b6575000 r-xp /usr/lib/libefreet_trash.so.1.7.99
b657d000 b6581000 r-xp /usr/lib/libefreet_mime.so.1.7.99
b658a000 b65a0000 r-xp /usr/lib/libefreet.so.1.7.99
b65aa000 b65b3000 r-xp /usr/lib/libedbus.so.1.7.99
b65bb000 b65c0000 r-xp /usr/lib/libecore_fb.so.1.7.99
b65c9000 b6625000 r-xp /usr/lib/libedje.so.1.7.99
b662f000 b6646000 r-xp /usr/lib/libecore_input.so.1.7.99
b6661000 b6666000 r-xp /usr/lib/libecore_file.so.1.7.99
b666e000 b668b000 r-xp /usr/lib/libecore_evas.so.1.7.99
b6694000 b66d3000 r-xp /usr/lib/libeina.so.1.7.99
b66dc000 b678b000 r-xp /usr/lib/libevas.so.1.7.99
b67ad000 b67c0000 r-xp /usr/lib/libeet.so.1.7.99
b67c9000 b6833000 r-xp /lib/libm-2.13.so
b683f000 b6846000 r-xp /usr/lib/libutilX.so.1.1.0
b684e000 b6853000 r-xp /usr/lib/libappcore-common.so.1.1
b685b000 b6866000 r-xp /usr/lib/libaul.so.0.1.0
b686f000 b68a3000 r-xp /usr/lib/libgobject-2.0.so.0.3200.3
b68ac000 b68dc000 r-xp /usr/lib/libecore_x.so.1.7.99
b68e5000 b68fa000 r-xp /usr/lib/libecore.so.1.7.99
b6911000 b6a31000 r-xp /usr/lib/libelementary.so.1.7.99
b6a44000 b6a47000 r-xp /lib/libattr.so.1.1.0
b6a4f000 b6a51000 r-xp /usr/lib/libXau.so.6.0.0
b6a59000 b6a5f000 r-xp /lib/librt-2.13.so
b6a68000 b6a70000 r-xp /lib/libcrypt-2.13.so
b6aa0000 b6aa3000 r-xp /lib/libcap.so.2.21
b6aab000 b6aad000 r-xp /usr/lib/libiri.so
b6ab5000 b6aca000 r-xp /usr/lib/libxcb.so.1.1.0
b6ad2000 b6add000 r-xp /lib/libunwind.so.8.0.1
b6b0b000 b6c28000 r-xp /lib/libc-2.13.so
b6c36000 b6c3f000 r-xp /lib/libgcc_s-4.5.3.so.1
b6c47000 b6c4a000 r-xp /usr/lib/libsmack.so.1.0.0
b6c52000 b6c7e000 r-xp /usr/lib/libdbus-1.so.3.7.2
b6c87000 b6c8b000 r-xp /usr/lib/libbundle.so.0.1.22
b6c93000 b6c95000 r-xp /lib/libdl-2.13.so
b6c9e000 b6d78000 r-xp /usr/lib/libglib-2.0.so.0.3200.3
b6d81000 b6deb000 r-xp /usr/lib/libsqlite3.so.0.8.6
b6df5000 b6e02000 r-xp /usr/lib/libprivilege-control.so.0.0.2
b6e0b000 b6ef1000 r-xp /usr/lib/libX11.so.6.3.0
b6efc000 b6f10000 r-xp /lib/libpthread-2.13.so
b6f20000 b6f24000 r-xp /usr/lib/libappcore-efl.so.1.1
b6f2d000 b6f2e000 r-xp /usr/lib/libdlog.so.0.0.0
b6f36000 b6f3a000 r-xp /usr/lib/libsys-assert.so
b6f42000 b6f5f000 r-xp /lib/ld-2.13.so
bec21000 bec42000 rwxp [stack]
End of Maps Information

Callstack Information (PID:20349)
Call Stack Count: 6
 0: Tizen::App::UiApp::GetAppFrame() const + 0x5 (0xb3ad8002) [/usr/lib/osp/libosp-uifw.so] + 0x6ab002
 1: FrameHandler::getOrientation() + 0x1c (0xb269fa1c) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x7a1c
 2: CommandCenterServiceApp::OnStart() + 0x88 (0xb269dfa8) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x5fa8
 3: non-virtual thunk to CommandCenterServiceApp::OnStart() + 0x20 (0xb269e014) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x6014
 4: Tizen::Base::Runtime::_ThreadImpl::ThreadProc(void*) + 0x1e (0xb42bd3df) [/usr/lib/osp/libosp-appfw.so] + 0x1653df
 5: start_thread + 0xf0 (0xb6f01b1c) [/lib/libpthread.so.0] + 0x5b1c
End of Call Stack

Package Information
Package Name: 0alTGXG65N.CommandCenterService
Package ID : 0alTGXG65N
Version: 1.0.0
Package Type: tpk
App Name: CommandCenterServices
App ID: 0alTGXG65N.CommandCenterService
Type: Application
Categories: (NULL)
