S/W Version Information
Model: Ref.Device-PQ
Tizen-Version: 2.2.1
Build-Number: Tizen_Ref.Device-PQ_20131118.1124
Build-Date: 2013.11.18 11:24:59

Crash Information
Process Name: CommandCenterService
PID: 2958
Date: 2014-09-17 11:56:16(GMT+0900)
Executable File Path: /opt/apps/0alTGXG65N/bin/CommandCenterService
Signal: 11
      (SIGSEGV)
      si_code: -6
      signal sent by tkill (sent by pid 2958, uid 5000)

Register Information
r0   = 0x001ffe50, r1   = 0x00000000
r2   = 0xb6caf248, r3   = 0x00000048
r4   = 0xb48b9bd8, r5   = 0x001ffe50
r6   = 0x0000019c, r7   = 0xb68c9548
r8   = 0xb68c93ac, r9   = 0x00000001
r10  = 0x00000001, fp   = 0xb68c9548
ip   = 0xb68c94ac, sp   = 0xac7f4a08
lr   = 0xb68bd70b, pc   = 0xb48b001a
cpsr = 0x60000030

Memory Information
MemTotal:   797320 KB
MemFree:    388276 KB
Buffers:     17176 KB
Cached:     167456 KB
VmPeak:     176200 KB
VmSize:     176132 KB
VmLck:           0 KB
VmHWM:       23020 KB
VmRSS:       18404 KB
VmData:     103932 KB
VmStk:         136 KB
VmExe:          32 KB
VmLib:       43428 KB
VmPTE:          98 KB
VmSwap:          0 KB

Maps Information
00008000 00010000 r-xp /usr/bin/launchpad_preloading_preinitializing_daemon
00018000 000dc000 rw-p [heap]
000dc000 0023c000 rw-p [heap]
b25b7000 b25cb000 r-xp /usr/lib/libnetwork.so.0.0.0
b25d4000 b25e8000 r-xp /usr/lib/libwifi-direct.so.0.0
b25f0000 b25f8000 r-xp /usr/lib/libcapi-network-tethering.so.0.1.0
b25f9000 b2602000 r-xp /usr/lib/libcapi-network-connection.so.0.1.3_18
b260a000 b26cf000 r-xp /usr/lib/osp/libosp-net.so.1.2.2.0
b26dd000 b26fa000 r-xp /usr/lib/osp/libosp-image.so.1.2.2.0
b2715000 b2722000 r-xp /opt/usr/apps/0alTGXG65N/bin/CommandCenterService.exe
b272d000 b279f000 r-xp /usr/lib/libosp-env-config.so.1.2.2.1
b27a7000 b27e1000 r-xp /usr/lib/libpulsecommon-0.9.23.so
b27ea000 b27ee000 r-xp /usr/lib/libmmfsoundcommon.so.0.0.0
b27f6000 b2827000 r-xp /usr/lib/libpulse.so.0.12.4
b282f000 b2892000 r-xp /usr/lib/libasound.so.2.0.0
b289c000 b289f000 r-xp /usr/lib/libpulse-simple.so.0.0.3
b28a7000 b28ab000 r-xp /usr/lib/libascenario-0.2.so.0.0.0
b28b4000 b28d1000 r-xp /usr/lib/libavsysaudio.so.0.0.1
b28d9000 b28e7000 r-xp /usr/lib/libmmfsound.so.0.1.0
b28ef000 b298b000 r-xp /usr/lib/libgstreamer-0.10.so.0.30.0
b2997000 b29d8000 r-xp /usr/lib/libgstbase-0.10.so.0.30.0
b29e1000 b29ea000 r-xp /usr/lib/libgstapp-0.10.so.0.25.0
b29f2000 b29ff000 r-xp /usr/lib/libgstinterfaces-0.10.so.0.25.0
b2a08000 b2a0e000 r-xp /usr/lib/libUMP.so
b2a16000 b2a19000 r-xp /usr/lib/libmm_ta.so.0.0.0
b2a21000 b2a30000 r-xp /usr/lib/libICE.so.6.3.0
b2a3a000 b2a3f000 r-xp /usr/lib/libSM.so.6.0.1
b2a47000 b2a48000 r-xp /usr/lib/libmmfkeysound.so.0.0.0
b2a50000 b2a58000 r-xp /usr/lib/libmmfcommon.so.0.0.0
b2a60000 b2a68000 r-xp /usr/lib/libaudio-session-mgr.so.0.0.0
b2a73000 b2a76000 r-xp /usr/lib/libmmfsession.so.0.0.0
b2a7e000 b2ac2000 r-xp /usr/lib/libmmfplayer.so.0.0.0
b2acb000 b2ade000 r-xp /usr/lib/libEGL_platform.so
b2ae7000 b2bbe000 r-xp /usr/lib/libMali.so
b2bc9000 b2bcf000 r-xp /usr/lib/libxcb-render.so.0.0.0
b2bd7000 b2bd8000 r-xp /usr/lib/libxcb-shm.so.0.0.0
b2be1000 b2c1f000 r-xp /usr/lib/libGLESv2.so.2.0
b2c27000 b2c72000 r-xp /usr/lib/libtiff.so.5.1.0
b2c7d000 b2ca6000 r-xp /usr/lib/libturbojpeg.so
b2cbf000 b2cc5000 r-xp /usr/lib/libmmutil_imgp.so.0.0.0
b2ccd000 b2cd3000 r-xp /usr/lib/libgif.so.4.1.6
b2cdb000 b2cfd000 r-xp /usr/lib/libavutil.so.51.73.101
b2d0c000 b2d3a000 r-xp /usr/lib/libswscale.so.2.1.101
b2d43000 b303a000 r-xp /usr/lib/libavcodec.so.54.59.100
b3361000 b337a000 r-xp /usr/lib/libpng12.so.0.50.0
b3383000 b3389000 r-xp /usr/lib/libfeedback.so.0.1.4
b3391000 b339d000 r-xp /usr/lib/libtts.so
b33a5000 b33bc000 r-xp /usr/lib/libEGL.so.1.4
b33c5000 b347c000 r-xp /usr/lib/libcairo.so.2.11200.12
b3486000 b34a0000 r-xp /usr/lib/osp/libosp-image-core.so.1.2.2.0
b34a9000 b3da4000 r-xp /usr/lib/osp/libosp-uifw.so.1.2.2.1
b3e17000 b3e1c000 r-xp /usr/lib/libslp_devman_plugin.so
b3e25000 b3e28000 r-xp /usr/lib/libsyspopup_caller.so.0.1.0
b3e30000 b3e34000 r-xp /usr/lib/libsysman.so.0.2.0
b3e3c000 b3e4d000 r-xp /usr/lib/libsecurity-server-commons.so.1.0.0
b3e56000 b3e58000 r-xp /usr/lib/libsystemd-daemon.so.0.0.1
b3e60000 b3e62000 r-xp /usr/lib/libdeviced.so.0.1.0
b3e6a000 b3e80000 r-xp /usr/lib/libpkgmgr_parser.so.0.1.0
b3e88000 b3e8a000 r-xp /usr/lib/libpkgmgr_installer_status_broadcast_server.so.0.1.0
b3e92000 b3e95000 r-xp /usr/lib/libpkgmgr_installer_client.so.0.1.0
b3e9d000 b3ea0000 r-xp /usr/lib/libdevice-node.so.0.1
b3ea8000 b3eac000 r-xp /usr/lib/libheynoti.so.0.0.2
b3eb4000 b3ef9000 r-xp /usr/lib/libsoup-2.4.so.1.5.0
b3f02000 b3f17000 r-xp /usr/lib/libsecurity-server-client.so.1.0.1
b3f20000 b3f24000 r-xp /usr/lib/libcapi-system-info.so.0.2.0
b3f2c000 b3f31000 r-xp /usr/lib/libcapi-system-system-settings.so.0.0.2
b3f39000 b3f3a000 r-xp /usr/lib/libcapi-system-power.so.0.1.1
b3f43000 b3f46000 r-xp /usr/lib/libcapi-system-device.so.0.1.0
b3f4e000 b3f51000 r-xp /usr/lib/libcapi-system-runtime-info.so.0.0.3
b3f5a000 b3f5d000 r-xp /usr/lib/libcapi-network-serial.so.0.0.8
b3f65000 b3f66000 r-xp /usr/lib/libcapi-content-mime-type.so.0.0.2
b3f6e000 b3f7c000 r-xp /usr/lib/libcapi-appfw-application.so.0.1.0
b3f85000 b3fa7000 r-xp /usr/lib/libSLP-tapi.so.0.0.0
b3faf000 b3fb2000 r-xp /usr/lib/libuuid.so.1.3.0
b3fbb000 b3fd9000 r-xp /usr/lib/libpkgmgr-info.so.0.0.17
b3fe1000 b3ff8000 r-xp /usr/lib/libpkgmgr-client.so.0.1.68
b4001000 b4002000 r-xp /usr/lib/libpmapi.so.1.2
b400a000 b4012000 r-xp /usr/lib/libminizip.so.1.0.0
b401a000 b4025000 r-xp /usr/lib/libmessage-port.so.1.2.2.1
b402d000 b4105000 r-xp /usr/lib/libxml2.so.2.7.8
b4112000 b4130000 r-xp /usr/lib/libpcre.so.0.0.1
b4138000 b413b000 r-xp /usr/lib/libiniparser.so.0
b4144000 b4148000 r-xp /usr/lib/libhaptic.so.0.1
b4150000 b415b000 r-xp /usr/lib/libcryptsvc.so.0.0.1
b4168000 b416d000 r-xp /usr/lib/libdevman.so.0.1
b4176000 b417a000 r-xp /usr/lib/libchromium.so.1.0
b4182000 b4188000 r-xp /usr/lib/libappsvc.so.0.1.0
b4190000 b4191000 r-xp /usr/lib/osp/libappinfo.so.1.2.2.1
b41a1000 b41a3000 r-xp /opt/usr/apps/0alTGXG65N/bin/CommandCenterService
b41ab000 b41b1000 r-xp /usr/lib/libalarm.so.0.0.0
b41ba000 b41cc000 r-xp /usr/lib/libprivacy-manager-client.so.0.0.5
b41d4000 b44d3000 r-xp /usr/lib/osp/libosp-appfw.so.1.2.2.1
b44fa000 b4504000 r-xp /lib/libnss_files-2.13.so
b450d000 b4516000 r-xp /lib/libnss_nis-2.13.so
b451f000 b4530000 r-xp /lib/libnsl-2.13.so
b453b000 b4541000 r-xp /lib/libnss_compat-2.13.so
b454a000 b4553000 r-xp /usr/lib/libcapi-security-privilege-manager.so.0.0.3
b487b000 b488c000 r-xp /usr/lib/libcom-core.so.0.0.1
b4894000 b4896000 r-xp /usr/lib/libdri2.so.0.0.0
b489e000 b48a6000 r-xp /usr/lib/libdrm.so.2.4.0
b48ae000 b48b2000 r-xp /usr/lib/libtbm.so.1.0.0
b48ba000 b48bd000 r-xp /usr/lib/libXv.so.1.0.0
b48c5000 b4990000 r-xp /usr/lib/libscim-1.0.so.8.2.3
b49a6000 b49b6000 r-xp /usr/lib/libnotification.so.0.1.0
b49be000 b49e2000 r-xp /usr/lib/ecore/immodules/libisf-imf-module.so
b49eb000 b49fb000 r-xp /lib/libresolv-2.13.so
b49ff000 b4a01000 r-xp /usr/lib/libgmodule-2.0.so.0.3200.3
b4a09000 b4b5c000 r-xp /usr/lib/libcrypto.so.1.0.0
b4b7a000 b4bc6000 r-xp /usr/lib/libssl.so.1.0.0
b4bd2000 b4bfe000 r-xp /usr/lib/libidn.so.11.5.44
b4c07000 b4c11000 r-xp /usr/lib/libcares.so.2.0.0
b4c19000 b4c30000 r-xp /lib/libexpat.so.1.5.2
b4c3a000 b4c5e000 r-xp /usr/lib/libicule.so.48.1
b4c67000 b4c6f000 r-xp /usr/lib/libsf_common.so
b4c77000 b4d12000 r-xp /usr/lib/libstdc++.so.6.0.14
b4d25000 b4e02000 r-xp /usr/lib/libgio-2.0.so.0.3200.3
b4e0d000 b4e32000 r-xp /usr/lib/libexif.so.12.3.3
b4e46000 b4e50000 r-xp /usr/lib/libethumb.so.1.7.99
b4e58000 b4e9c000 r-xp /usr/lib/libsndfile.so.1.0.25
b4eaa000 b4eac000 r-xp /usr/lib/libctxdata.so.0.0.0
b4eb4000 b4ec2000 r-xp /usr/lib/libremix.so.0.0.0
b4eca000 b4ecb000 r-xp /usr/lib/libecore_imf_evas.so.1.7.99
b4ed3000 b4eec000 r-xp /usr/lib/liblua-5.1.so
b4ef5000 b4efc000 r-xp /usr/lib/libembryo.so.1.7.99
b4f05000 b4f08000 r-xp /usr/lib/libecore_input_evas.so.1.7.99
b4f10000 b4f4d000 r-xp /usr/lib/libcurl.so.4.3.0
b4f57000 b4f5b000 r-xp /usr/lib/libecore_ipc.so.1.7.99
b4f64000 b4fce000 r-xp /usr/lib/libpixman-1.so.0.28.2
b4fdb000 b4fff000 r-xp /usr/lib/libfontconfig.so.1.5.0
b5008000 b5064000 r-xp /usr/lib/libharfbuzz.so.0.907.0
b5076000 b508a000 r-xp /usr/lib/libfribidi.so.0.3.1
b5092000 b50e7000 r-xp /usr/lib/libfreetype.so.6.8.1
b50f2000 b5116000 r-xp /usr/lib/libjpeg.so.8.0.2
b512e000 b5145000 r-xp /lib/libz.so.1.2.5
b514d000 b515a000 r-xp /usr/lib/libsensor.so.1.1.0
b5165000 b5167000 r-xp /usr/lib/libapp-checker.so.0.1.0
b516f000 b5175000 r-xp /usr/lib/libxdgmime.so.1.1.0
b628c000 b6374000 r-xp /usr/lib/libicuuc.so.48.1
b6381000 b64a1000 r-xp /usr/lib/libicui18n.so.48.1
b64af000 b64b2000 r-xp /usr/lib/libSLP-db-util.so.0.1.0
b64ba000 b64c3000 r-xp /usr/lib/libvconf.so.0.2.45
b64cb000 b64d9000 r-xp /usr/lib/libail.so.0.1.0
b64e1000 b64f9000 r-xp /usr/lib/libdbus-glib-1.so.2.2.2
b64fa000 b64ff000 r-xp /usr/lib/libffi.so.5.0.10
b6507000 b6508000 r-xp /usr/lib/libgthread-2.0.so.0.3200.3
b6510000 b651a000 r-xp /usr/lib/libXext.so.6.4.0
b6523000 b6526000 r-xp /usr/lib/libXtst.so.6.1.0
b652e000 b6534000 r-xp /usr/lib/libXrender.so.1.3.0
b653c000 b6542000 r-xp /usr/lib/libXrandr.so.2.2.0
b654a000 b654b000 r-xp /usr/lib/libXinerama.so.1.0.0
b6554000 b655d000 r-xp /usr/lib/libXi.so.6.1.0
b6565000 b6568000 r-xp /usr/lib/libXfixes.so.3.1.0
b6570000 b6572000 r-xp /usr/lib/libXgesture.so.7.0.0
b657a000 b657c000 r-xp /usr/lib/libXcomposite.so.1.0.0
b6584000 b6585000 r-xp /usr/lib/libXdamage.so.1.1.0
b658e000 b6595000 r-xp /usr/lib/libXcursor.so.1.0.2
b659d000 b65a5000 r-xp /usr/lib/libemotion.so.1.7.99
b65ad000 b65c8000 r-xp /usr/lib/libecore_con.so.1.7.99
b65d1000 b65d6000 r-xp /usr/lib/libecore_imf.so.1.7.99
b65df000 b65e7000 r-xp /usr/lib/libethumb_client.so.1.7.99
b65ef000 b65f1000 r-xp /usr/lib/libefreet_trash.so.1.7.99
b65f9000 b65fd000 r-xp /usr/lib/libefreet_mime.so.1.7.99
b6606000 b661c000 r-xp /usr/lib/libefreet.so.1.7.99
b6626000 b662f000 r-xp /usr/lib/libedbus.so.1.7.99
b6637000 b663c000 r-xp /usr/lib/libecore_fb.so.1.7.99
b6645000 b66a1000 r-xp /usr/lib/libedje.so.1.7.99
b66ab000 b66c2000 r-xp /usr/lib/libecore_input.so.1.7.99
b66dd000 b66e2000 r-xp /usr/lib/libecore_file.so.1.7.99
b66ea000 b6707000 r-xp /usr/lib/libecore_evas.so.1.7.99
b6710000 b674f000 r-xp /usr/lib/libeina.so.1.7.99
b6758000 b6807000 r-xp /usr/lib/libevas.so.1.7.99
b6829000 b683c000 r-xp /usr/lib/libeet.so.1.7.99
b6845000 b68af000 r-xp /lib/libm-2.13.so
b68bb000 b68c2000 r-xp /usr/lib/libutilX.so.1.1.0
b68ca000 b68cf000 r-xp /usr/lib/libappcore-common.so.1.1
b68d7000 b68e2000 r-xp /usr/lib/libaul.so.0.1.0
b68eb000 b691f000 r-xp /usr/lib/libgobject-2.0.so.0.3200.3
b6928000 b6958000 r-xp /usr/lib/libecore_x.so.1.7.99
b6961000 b6976000 r-xp /usr/lib/libecore.so.1.7.99
b698d000 b6aad000 r-xp /usr/lib/libelementary.so.1.7.99
b6ac0000 b6ac3000 r-xp /lib/libattr.so.1.1.0
b6acb000 b6acd000 r-xp /usr/lib/libXau.so.6.0.0
b6ad5000 b6adb000 r-xp /lib/librt-2.13.so
b6ae4000 b6aec000 r-xp /lib/libcrypt-2.13.so
b6b1c000 b6b1f000 r-xp /lib/libcap.so.2.21
b6b27000 b6b29000 r-xp /usr/lib/libiri.so
b6b31000 b6b46000 r-xp /usr/lib/libxcb.so.1.1.0
b6b4e000 b6b59000 r-xp /lib/libunwind.so.8.0.1
b6b87000 b6ca4000 r-xp /lib/libc-2.13.so
b6cb2000 b6cbb000 r-xp /lib/libgcc_s-4.5.3.so.1
b6cc3000 b6cc6000 r-xp /usr/lib/libsmack.so.1.0.0
b6cce000 b6cfa000 r-xp /usr/lib/libdbus-1.so.3.7.2
b6d03000 b6d07000 r-xp /usr/lib/libbundle.so.0.1.22
b6d0f000 b6d11000 r-xp /lib/libdl-2.13.so
b6d1a000 b6df4000 r-xp /usr/lib/libglib-2.0.so.0.3200.3
b6dfd000 b6e67000 r-xp /usr/lib/libsqlite3.so.0.8.6
b6e71000 b6e7e000 r-xp /usr/lib/libprivilege-control.so.0.0.2
b6e87000 b6f6d000 r-xp /usr/lib/libX11.so.6.3.0
b6f78000 b6f8c000 r-xp /lib/libpthread-2.13.so
b6f9c000 b6fa0000 r-xp /usr/lib/libappcore-efl.so.1.1
b6fa9000 b6faa000 r-xp /usr/lib/libdlog.so.0.0.0
b6fb2000 b6fb6000 r-xp /usr/lib/libsys-assert.so
b6fbe000 b6fdb000 r-xp /lib/ld-2.13.so
beabf000 beae0000 rwxp [stack]
End of Maps Information

Callstack Information (PID:2958)
Call Stack Count: 12
 0: tbm_bufmgr_deinit + 0x11 (0xb48b001a) [/usr/lib/libtbm.so.1] + 0x201a
 1: _deinit_screen_shot + 0x62 (0xb68bd70b) [/usr/lib/libutilX.so.1] + 0x270b
 2: utilx_release_screen_shot + 0xe (0xb68bf0cb) [/usr/lib/libutilX.so.1] + 0x40cb
 3: utilx_create_screen_shot + 0x366 (0xb68bf43b) [/usr/lib/libutilX.so.1] + 0x443b
 4: Tizen::Ui::_SystemUtilImpl::CaptureScreenN() + 0x36 (0xb380b99f) [/usr/lib/osp/libosp-uifw.so] + 0x36299f
 5: Tizen::Ui::SystemUtil::CaptureScreenN() + 0x1e (0xb380b5ab) [/usr/lib/osp/libosp-uifw.so] + 0x3625ab
 6: getFrameBuffer(unsigned char*) + 0x24 (0xb271c458) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x7458
 7: FrameHandler::getFrameStream() + 0x24 (0xb271c850) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x7850
 8: CommandCenterServiceApp::OnStart() + 0x68 (0xb271aeac) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x5eac
 9: non-virtual thunk to CommandCenterServiceApp::OnStart() + 0x20 (0xb271af38) [/opt/apps/0alTGXG65N/bin/CommandCenterService.exe] + 0x5f38
10: Tizen::Base::Runtime::_ThreadImpl::ThreadProc(void*) + 0x1e (0xb43393df) [/usr/lib/osp/libosp-appfw.so] + 0x1653df
11: start_thread + 0xf0 (0xb6f7db1c) [/lib/libpthread.so.0] + 0x5b1c
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
