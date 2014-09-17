S/W Version Information
Model: Ref.Device-PQ
Tizen-Version: 2.2.1
Build-Number: Tizen_Ref.Device-PQ_20131118.1124
Build-Date: 2013.11.18 11:24:59

Crash Information
Process Name: CommandCenter
PID: 625
Date: 2014-09-17 13:29:02(GMT+0900)
Executable File Path: /opt/apps/is3EZgrF01/bin/CommandCenter
This process is multi-thread process
pid=625 tid=625
Signal: 11
      (SIGSEGV)
      si_code: -6
      signal sent by tkill (sent by pid 625, uid 5000)

Register Information
r0   = 0xbe912940, r1   = 0x00000008
r2   = 0x001500b0, r3   = 0x00000000
r4   = 0x00166210, r5   = 0xb3e03d70
r6   = 0x00166210, r7   = 0xb3e03d70
r8   = 0xa00009cb, r9   = 0xbe912b3c
r10  = 0x00000002, fp   = 0xbe912980
ip   = 0xb3e05168, sp   = 0xbe9127e0
lr   = 0xb3ac74b5, pc   = 0xb271a404
cpsr = 0x80000010

Memory Information
MemTotal:   797320 KB
MemFree:    134376 KB
Buffers:     75816 KB
Cached:     352772 KB
VmPeak:      79116 KB
VmSize:      79104 KB
VmLck:           0 KB
VmHWM:       15188 KB
VmRSS:       15188 KB
VmData:       7668 KB
VmStk:         136 KB
VmExe:          32 KB
VmLib:       42388 KB
VmPTE:          64 KB
VmSwap:          0 KB

Maps Information
00008000 00010000 r-xp /usr/bin/launchpad_preloading_preinitializing_daemon
00018000 000dc000 rw-p [heap]
000dc000 001b0000 rw-p [heap]
b26ad000 b26b0000 r-xp /usr/lib/bufmgr/libtbm_exynos4412.so.0.0.0
b26b8000 b26b9000 r-xp /usr/lib/libdrm_slp.so.1.0.0
b26c1000 b26cb000 r-xp /usr/lib/evas/modules/engines/software_generic/linux-gnueabi-armv7l-1.7.99/module.so
b26d3000 b26dc000 r-xp /usr/lib/evas/modules/engines/software_x11/linux-gnueabi-armv7l-1.7.99/module.so
b2710000 b271d000 r-xp /opt/usr/apps/is3EZgrF01/bin/CommandCenter.exe
b2725000 b2797000 r-xp /usr/lib/libosp-env-config.so.1.2.2.1
b279f000 b27d9000 r-xp /usr/lib/libpulsecommon-0.9.23.so
b27e2000 b27e6000 r-xp /usr/lib/libmmfsoundcommon.so.0.0.0
b27ee000 b281f000 r-xp /usr/lib/libpulse.so.0.12.4
b2827000 b288a000 r-xp /usr/lib/libasound.so.2.0.0
b2894000 b2897000 r-xp /usr/lib/libpulse-simple.so.0.0.3
b289f000 b28a3000 r-xp /usr/lib/libascenario-0.2.so.0.0.0
b28ac000 b28c9000 r-xp /usr/lib/libavsysaudio.so.0.0.1
b28d1000 b28df000 r-xp /usr/lib/libmmfsound.so.0.1.0
b28e7000 b2983000 r-xp /usr/lib/libgstreamer-0.10.so.0.30.0
b298f000 b29d0000 r-xp /usr/lib/libgstbase-0.10.so.0.30.0
b29d9000 b29e2000 r-xp /usr/lib/libgstapp-0.10.so.0.25.0
b29ea000 b29f7000 r-xp /usr/lib/libgstinterfaces-0.10.so.0.25.0
b2a00000 b2a06000 r-xp /usr/lib/libUMP.so
b2a0e000 b2a11000 r-xp /usr/lib/libmm_ta.so.0.0.0
b2a19000 b2a28000 r-xp /usr/lib/libICE.so.6.3.0
b2a32000 b2a37000 r-xp /usr/lib/libSM.so.6.0.1
b2a3f000 b2a40000 r-xp /usr/lib/libmmfkeysound.so.0.0.0
b2a48000 b2a50000 r-xp /usr/lib/libmmfcommon.so.0.0.0
b2a58000 b2a60000 r-xp /usr/lib/libaudio-session-mgr.so.0.0.0
b2a6b000 b2a6e000 r-xp /usr/lib/libmmfsession.so.0.0.0
b2a76000 b2aba000 r-xp /usr/lib/libmmfplayer.so.0.0.0
b2ac3000 b2ad6000 r-xp /usr/lib/libEGL_platform.so
b2adf000 b2bb6000 r-xp /usr/lib/libMali.so
b2bc1000 b2bc7000 r-xp /usr/lib/libxcb-render.so.0.0.0
b2bcf000 b2bd0000 r-xp /usr/lib/libxcb-shm.so.0.0.0
b2bd9000 b2c17000 r-xp /usr/lib/libGLESv2.so.2.0
b2c1f000 b2c6a000 r-xp /usr/lib/libtiff.so.5.1.0
b2c75000 b2c9e000 r-xp /usr/lib/libturbojpeg.so
b2cb7000 b2cbd000 r-xp /usr/lib/libmmutil_imgp.so.0.0.0
b2cc5000 b2ccb000 r-xp /usr/lib/libgif.so.4.1.6
b2cd3000 b2cf5000 r-xp /usr/lib/libavutil.so.51.73.101
b2d04000 b2d32000 r-xp /usr/lib/libswscale.so.2.1.101
b2d3b000 b3032000 r-xp /usr/lib/libavcodec.so.54.59.100
b3359000 b3372000 r-xp /usr/lib/libpng12.so.0.50.0
b337b000 b3381000 r-xp /usr/lib/libfeedback.so.0.1.4
b3389000 b3395000 r-xp /usr/lib/libtts.so
b339d000 b33b4000 r-xp /usr/lib/libEGL.so.1.4
b33bd000 b3474000 r-xp /usr/lib/libcairo.so.2.11200.12
b347e000 b3498000 r-xp /usr/lib/osp/libosp-image-core.so.1.2.2.0
b34a1000 b3d9c000 r-xp /usr/lib/osp/libosp-uifw.so.1.2.2.1
b3e0f000 b3e14000 r-xp /usr/lib/libslp_devman_plugin.so
b3e1d000 b3e20000 r-xp /usr/lib/libsyspopup_caller.so.0.1.0
b3e28000 b3e2c000 r-xp /usr/lib/libsysman.so.0.2.0
b3e34000 b3e45000 r-xp /usr/lib/libsecurity-server-commons.so.1.0.0
b3e4e000 b3e50000 r-xp /usr/lib/libsystemd-daemon.so.0.0.1
b3e58000 b3e5a000 r-xp /usr/lib/libdeviced.so.0.1.0
b3e62000 b3e78000 r-xp /usr/lib/libpkgmgr_parser.so.0.1.0
b3e80000 b3e82000 r-xp /usr/lib/libpkgmgr_installer_status_broadcast_server.so.0.1.0
b3e8a000 b3e8d000 r-xp /usr/lib/libpkgmgr_installer_client.so.0.1.0
b3e95000 b3e98000 r-xp /usr/lib/libdevice-node.so.0.1
b3ea0000 b3ea4000 r-xp /usr/lib/libheynoti.so.0.0.2
b3eac000 b3ef1000 r-xp /usr/lib/libsoup-2.4.so.1.5.0
b3efa000 b3f0f000 r-xp /usr/lib/libsecurity-server-client.so.1.0.1
b3f18000 b3f1c000 r-xp /usr/lib/libcapi-system-info.so.0.2.0
b3f24000 b3f29000 r-xp /usr/lib/libcapi-system-system-settings.so.0.0.2
b3f31000 b3f32000 r-xp /usr/lib/libcapi-system-power.so.0.1.1
b3f3b000 b3f3e000 r-xp /usr/lib/libcapi-system-device.so.0.1.0
b3f46000 b3f49000 r-xp /usr/lib/libcapi-system-runtime-info.so.0.0.3
b3f52000 b3f55000 r-xp /usr/lib/libcapi-network-serial.so.0.0.8
b3f5d000 b3f5e000 r-xp /usr/lib/libcapi-content-mime-type.so.0.0.2
b3f66000 b3f74000 r-xp /usr/lib/libcapi-appfw-application.so.0.1.0
b3f7d000 b3f9f000 r-xp /usr/lib/libSLP-tapi.so.0.0.0
b3fa7000 b3faa000 r-xp /usr/lib/libuuid.so.1.3.0
b3fb3000 b3fd1000 r-xp /usr/lib/libpkgmgr-info.so.0.0.17
b3fd9000 b3ff0000 r-xp /usr/lib/libpkgmgr-client.so.0.1.68
b3ff9000 b3ffa000 r-xp /usr/lib/libpmapi.so.1.2
b4002000 b400a000 r-xp /usr/lib/libminizip.so.1.0.0
b4012000 b401d000 r-xp /usr/lib/libmessage-port.so.1.2.2.1
b4025000 b40fd000 r-xp /usr/lib/libxml2.so.2.7.8
b410a000 b4128000 r-xp /usr/lib/libpcre.so.0.0.1
b4130000 b4133000 r-xp /usr/lib/libiniparser.so.0
b413c000 b4140000 r-xp /usr/lib/libhaptic.so.0.1
b4148000 b4153000 r-xp /usr/lib/libcryptsvc.so.0.0.1
b4160000 b4165000 r-xp /usr/lib/libdevman.so.0.1
b416e000 b4172000 r-xp /usr/lib/libchromium.so.1.0
b417a000 b4180000 r-xp /usr/lib/libappsvc.so.0.1.0
b4188000 b4189000 r-xp /usr/lib/osp/libappinfo.so.1.2.2.1
b4199000 b419b000 r-xp /opt/usr/apps/is3EZgrF01/bin/CommandCenter
b41a3000 b41a9000 r-xp /usr/lib/libalarm.so.0.0.0
b41b2000 b41c4000 r-xp /usr/lib/libprivacy-manager-client.so.0.0.5
b41cc000 b44cb000 r-xp /usr/lib/osp/libosp-appfw.so.1.2.2.1
b44f2000 b44fc000 r-xp /lib/libnss_files-2.13.so
b4505000 b450e000 r-xp /lib/libnss_nis-2.13.so
b4517000 b4528000 r-xp /lib/libnsl-2.13.so
b4533000 b4539000 r-xp /lib/libnss_compat-2.13.so
b4542000 b454b000 r-xp /usr/lib/libcapi-security-privilege-manager.so.0.0.3
b4873000 b4884000 r-xp /usr/lib/libcom-core.so.0.0.1
b488c000 b488e000 r-xp /usr/lib/libdri2.so.0.0.0
b4896000 b489e000 r-xp /usr/lib/libdrm.so.2.4.0
b48a6000 b48aa000 r-xp /usr/lib/libtbm.so.1.0.0
b48b2000 b48b5000 r-xp /usr/lib/libXv.so.1.0.0
b48bd000 b4988000 r-xp /usr/lib/libscim-1.0.so.8.2.3
b499e000 b49ae000 r-xp /usr/lib/libnotification.so.0.1.0
b49b6000 b49da000 r-xp /usr/lib/ecore/immodules/libisf-imf-module.so
b49e3000 b49f3000 r-xp /lib/libresolv-2.13.so
b49f7000 b49f9000 r-xp /usr/lib/libgmodule-2.0.so.0.3200.3
b4a01000 b4b54000 r-xp /usr/lib/libcrypto.so.1.0.0
b4b72000 b4bbe000 r-xp /usr/lib/libssl.so.1.0.0
b4bca000 b4bf6000 r-xp /usr/lib/libidn.so.11.5.44
b4bff000 b4c09000 r-xp /usr/lib/libcares.so.2.0.0
b4c11000 b4c28000 r-xp /lib/libexpat.so.1.5.2
b4c32000 b4c56000 r-xp /usr/lib/libicule.so.48.1
b4c5f000 b4c67000 r-xp /usr/lib/libsf_common.so
b4c6f000 b4d0a000 r-xp /usr/lib/libstdc++.so.6.0.14
b4d1d000 b4dfa000 r-xp /usr/lib/libgio-2.0.so.0.3200.3
b4e05000 b4e2a000 r-xp /usr/lib/libexif.so.12.3.3
b4e3e000 b4e48000 r-xp /usr/lib/libethumb.so.1.7.99
b4e50000 b4e94000 r-xp /usr/lib/libsndfile.so.1.0.25
b4ea2000 b4ea4000 r-xp /usr/lib/libctxdata.so.0.0.0
b4eac000 b4eba000 r-xp /usr/lib/libremix.so.0.0.0
b4ec2000 b4ec3000 r-xp /usr/lib/libecore_imf_evas.so.1.7.99
b4ecb000 b4ee4000 r-xp /usr/lib/liblua-5.1.so
b4eed000 b4ef4000 r-xp /usr/lib/libembryo.so.1.7.99
b4efd000 b4f00000 r-xp /usr/lib/libecore_input_evas.so.1.7.99
b4f08000 b4f45000 r-xp /usr/lib/libcurl.so.4.3.0
b4f4f000 b4f53000 r-xp /usr/lib/libecore_ipc.so.1.7.99
b4f5c000 b4fc6000 r-xp /usr/lib/libpixman-1.so.0.28.2
b4fd3000 b4ff7000 r-xp /usr/lib/libfontconfig.so.1.5.0
b5000000 b505c000 r-xp /usr/lib/libharfbuzz.so.0.907.0
b506e000 b5082000 r-xp /usr/lib/libfribidi.so.0.3.1
b508a000 b50df000 r-xp /usr/lib/libfreetype.so.6.8.1
b50ea000 b510e000 r-xp /usr/lib/libjpeg.so.8.0.2
b5126000 b513d000 r-xp /lib/libz.so.1.2.5
b5145000 b5152000 r-xp /usr/lib/libsensor.so.1.1.0
b515d000 b515f000 r-xp /usr/lib/libapp-checker.so.0.1.0
b5167000 b516d000 r-xp /usr/lib/libxdgmime.so.1.1.0
b6284000 b636c000 r-xp /usr/lib/libicuuc.so.48.1
b6379000 b6499000 r-xp /usr/lib/libicui18n.so.48.1
b64a7000 b64aa000 r-xp /usr/lib/libSLP-db-util.so.0.1.0
b64b2000 b64bb000 r-xp /usr/lib/libvconf.so.0.2.45
b64c3000 b64d1000 r-xp /usr/lib/libail.so.0.1.0
b64d9000 b64f1000 r-xp /usr/lib/libdbus-glib-1.so.2.2.2
b64f2000 b64f7000 r-xp /usr/lib/libffi.so.5.0.10
b64ff000 b6500000 r-xp /usr/lib/libgthread-2.0.so.0.3200.3
b6508000 b6512000 r-xp /usr/lib/libXext.so.6.4.0
b651b000 b651e000 r-xp /usr/lib/libXtst.so.6.1.0
b6526000 b652c000 r-xp /usr/lib/libXrender.so.1.3.0
b6534000 b653a000 r-xp /usr/lib/libXrandr.so.2.2.0
b6542000 b6543000 r-xp /usr/lib/libXinerama.so.1.0.0
b654c000 b6555000 r-xp /usr/lib/libXi.so.6.1.0
b655d000 b6560000 r-xp /usr/lib/libXfixes.so.3.1.0
b6568000 b656a000 r-xp /usr/lib/libXgesture.so.7.0.0
b6572000 b6574000 r-xp /usr/lib/libXcomposite.so.1.0.0
b657c000 b657d000 r-xp /usr/lib/libXdamage.so.1.1.0
b6586000 b658d000 r-xp /usr/lib/libXcursor.so.1.0.2
b6595000 b659d000 r-xp /usr/lib/libemotion.so.1.7.99
b65a5000 b65c0000 r-xp /usr/lib/libecore_con.so.1.7.99
b65c9000 b65ce000 r-xp /usr/lib/libecore_imf.so.1.7.99
b65d7000 b65df000 r-xp /usr/lib/libethumb_client.so.1.7.99
b65e7000 b65e9000 r-xp /usr/lib/libefreet_trash.so.1.7.99
b65f1000 b65f5000 r-xp /usr/lib/libefreet_mime.so.1.7.99
b65fe000 b6614000 r-xp /usr/lib/libefreet.so.1.7.99
b661e000 b6627000 r-xp /usr/lib/libedbus.so.1.7.99
b662f000 b6634000 r-xp /usr/lib/libecore_fb.so.1.7.99
b663d000 b6699000 r-xp /usr/lib/libedje.so.1.7.99
b66a3000 b66ba000 r-xp /usr/lib/libecore_input.so.1.7.99
b66d5000 b66da000 r-xp /usr/lib/libecore_file.so.1.7.99
b66e2000 b66ff000 r-xp /usr/lib/libecore_evas.so.1.7.99
b6708000 b6747000 r-xp /usr/lib/libeina.so.1.7.99
b6750000 b67ff000 r-xp /usr/lib/libevas.so.1.7.99
b6821000 b6834000 r-xp /usr/lib/libeet.so.1.7.99
b683d000 b68a7000 r-xp /lib/libm-2.13.so
b68b3000 b68ba000 r-xp /usr/lib/libutilX.so.1.1.0
b68c2000 b68c7000 r-xp /usr/lib/libappcore-common.so.1.1
b68cf000 b68da000 r-xp /usr/lib/libaul.so.0.1.0
b68e3000 b6917000 r-xp /usr/lib/libgobject-2.0.so.0.3200.3
b6920000 b6950000 r-xp /usr/lib/libecore_x.so.1.7.99
b6959000 b696e000 r-xp /usr/lib/libecore.so.1.7.99
b6985000 b6aa5000 r-xp /usr/lib/libelementary.so.1.7.99
b6ab8000 b6abb000 r-xp /lib/libattr.so.1.1.0
b6ac3000 b6ac5000 r-xp /usr/lib/libXau.so.6.0.0
b6acd000 b6ad3000 r-xp /lib/librt-2.13.so
b6adc000 b6ae4000 r-xp /lib/libcrypt-2.13.so
b6b14000 b6b17000 r-xp /lib/libcap.so.2.21
b6b1f000 b6b21000 r-xp /usr/lib/libiri.so
b6b29000 b6b3e000 r-xp /usr/lib/libxcb.so.1.1.0
b6b46000 b6b51000 r-xp /lib/libunwind.so.8.0.1
b6b7f000 b6c9c000 r-xp /lib/libc-2.13.so
b6caa000 b6cb3000 r-xp /lib/libgcc_s-4.5.3.so.1
b6cbb000 b6cbe000 r-xp /usr/lib/libsmack.so.1.0.0
b6cc6000 b6cf2000 r-xp /usr/lib/libdbus-1.so.3.7.2
b6cfb000 b6cff000 r-xp /usr/lib/libbundle.so.0.1.22
b6d07000 b6d09000 r-xp /lib/libdl-2.13.so
b6d12000 b6dec000 r-xp /usr/lib/libglib-2.0.so.0.3200.3
b6df5000 b6e5f000 r-xp /usr/lib/libsqlite3.so.0.8.6
b6e69000 b6e76000 r-xp /usr/lib/libprivilege-control.so.0.0.2
b6e7f000 b6f65000 r-xp /usr/lib/libX11.so.6.3.0
b6f70000 b6f84000 r-xp /lib/libpthread-2.13.so
b6f94000 b6f98000 r-xp /usr/lib/libappcore-efl.so.1.1
b6fa1000 b6fa2000 r-xp /usr/lib/libdlog.so.0.0.0
b6faa000 b6fae000 r-xp /usr/lib/libsys-assert.so
b6fb6000 b6fd3000 r-xp /lib/ld-2.13.so
be8f4000 be915000 rwxp [stack]
End of Maps Information

Callstack Information (PID:625)
Call Stack Count: 44
 0: ToastView::init(Mainform*) + 0x128 (0xb271a404) [/opt/apps/is3EZgrF01/bin/CommandCenter.exe] + 0xa404
 1: Mainform::OnInitializing() + 0x170 (0xb2718290) [/opt/apps/is3EZgrF01/bin/CommandCenter.exe] + 0x8290
 2: Tizen::Ui::_ControlImpl::OnAttachedToMainTree() + 0x22 (0xb37651a3) [/usr/lib/osp/libosp-uifw.so] + 0x2c41a3
 3: Tizen::Ui::Controls::_FormImpl::OnAttachedToMainTree() + 0x2e (0xb393fbc3) [/usr/lib/osp/libosp-uifw.so] + 0x49ebc3
 4: Tizen::Ui::_Control::CallOnAttachedToMainTree(Tizen::Ui::_Control&) + 0xb2 (0xb374c0af) [/usr/lib/osp/libosp-uifw.so] + 0x2ab0af
 5: Tizen::Ui::_Control::EndAttaching(Tizen::Ui::_Control&) + 0xfc (0xb374f969) [/usr/lib/osp/libosp-uifw.so] + 0x2ae969
 6: Tizen::Ui::_Control::AttachChild(Tizen::Ui::_Control&) + 0x72 (0xb37524ef) [/usr/lib/osp/libosp-uifw.so] + 0x2b14ef
 7: Tizen::Ui::_ContainerImpl::AddChild(Tizen::Ui::_ControlImpl*, bool) + 0xac (0xb3772051) [/usr/lib/osp/libosp-uifw.so] + 0x2d1051
 8: Tizen::Ui::Container::AddControl(Tizen::Ui::Control*) + 0x26 (0xb37467b7) [/usr/lib/osp/libosp-uifw.so] + 0x2a57b7
 9: CommandCenterFrame::OnInitializing() + 0xbc (0xb27168c8) [/opt/apps/is3EZgrF01/bin/CommandCenter.exe] + 0x68c8
10: Tizen::Ui::_ControlImpl::OnAttachedToMainTree() + 0x22 (0xb37651a3) [/usr/lib/osp/libosp-uifw.so] + 0x2c41a3
11: Tizen::Ui::Controls::_FrameImpl::OnAttachedToMainTree() + 0xa (0xb394341b) [/usr/lib/osp/libosp-uifw.so] + 0x4a241b
12: Tizen::Ui::_ControlManager::CallOnAttachedToMainTree(Tizen::Ui::_Control&) + 0x76 (0xb3775a9b) [/usr/lib/osp/libosp-uifw.so] + 0x2d4a9b
13: Tizen::Ui::_ControlManager::ActivateWindow(Tizen::Ui::_Window&, bool) + 0xc6 (0xb37767ef) [/usr/lib/osp/libosp-uifw.so] + 0x2d57ef
14: Tizen::Ui::_ControlManager::OpenWindow(Tizen::Ui::_Window&, bool) + 0x2e (0xb3776a07) [/usr/lib/osp/libosp-uifw.so] + 0x2d5a07
15: Tizen::Ui::_Window::Open(bool) + 0x3c (0xb3763505) [/usr/lib/osp/libosp-uifw.so] + 0x2c2505
16: Tizen::Ui::_WindowImpl::Open(bool) + 0x12 (0xb3773a57) [/usr/lib/osp/libosp-uifw.so] + 0x2d2a57
17: Tizen::App::_UiAppImpl::AddFrame(Tizen::Ui::Controls::Frame const&) + 0x40 (0xb3b4cdb1) [/usr/lib/osp/libosp-uifw.so] + 0x6abdb1
18: Tizen::App::UiApp::AddFrame(Tizen::Ui::Controls::Frame const&) + 0x14 (0xb3b4c04d) [/usr/lib/osp/libosp-uifw.so] + 0x6ab04d
19: CommandCenterApp::OnAppInitialized() + 0x17c (0xb27158f8) [/opt/apps/is3EZgrF01/bin/CommandCenter.exe] + 0x58f8
20: Tizen::App::_UiAppImpl::OnAppInitialized() + 0x18 (0xb3b4c4c5) [/usr/lib/osp/libosp-uifw.so] + 0x6ab4c5
21: Tizen::App::_AppImpl::OnService(service_s*, void*) + 0x208 (0xb42b960d) [/usr/lib/osp/libosp-appfw.so] + 0xed60d
22: app_appcore_reset + 0x20 (0xb3f6dd89) [/usr/lib/libcapi-appfw-application.so.0] + 0x7d89
23: __do_app + 0x2b4 (0xb6f960fd) [/usr/lib/libappcore-efl.so.1] + 0x20fd
24: __aul_handler + 0x60 (0xb68c398d) [/usr/lib/libappcore-common.so.1] + 0x198d
25: app_start + 0x1c (0xb68d21fd) [/usr/lib/libaul.so.0] + 0x31fd
26: __app_start_internal + 0x8 (0xb68d2b25) [/usr/lib/libaul.so.0] + 0x3b25
27: g_idle_dispatch + 0xe (0xb6d48c53) [/usr/lib/libglib-2.0.so.0] + 0x36c53
28: g_main_context_dispatch + 0xce (0xb6d4aa37) [/usr/lib/libglib-2.0.so.0] + 0x38a37
29: _ecore_glib_select + 0x3ae (0xb6968337) [/usr/lib/libecore.so.1] + 0xf337
30: _ecore_main_select + 0x294 (0xb69638b9) [/usr/lib/libecore.so.1] + 0xa8b9
31: _ecore_main_loop_iterate_internal + 0x2de (0xb69642f3) [/usr/lib/libecore.so.1] + 0xb2f3
32: ecore_main_loop_begin + 0x30 (0xb69645cd) [/usr/lib/libecore.so.1] + 0xb5cd
33: elm_run + 0x6 (0xb6a2d19f) [/usr/lib/libelementary.so.1] + 0xa819f
34: appcore_efl_main + 0x2d4 (0xb6f967d5) [/usr/lib/libappcore-efl.so.1] + 0x27d5
35: app_efl_main + 0xc6 (0xb3f6e07f) [/usr/lib/libcapi-appfw-application.so.0] + 0x807f
36: Tizen::App::_AppImpl::Execute(Tizen::App::_IAppImpl*) + 0xe6 (0xb42b98b3) [/usr/lib/osp/libosp-appfw.so] + 0xed8b3
37: Tizen::App::UiApp::Execute(Tizen::App::UiApp* (*)(), Tizen::Base::Collection::IList const*) + 0x64 (0xb3b4c231) [/usr/lib/osp/libosp-uifw.so] + 0x6ab231
38: OspMain + 0x1ac (0xb2716540) [/opt/apps/is3EZgrF01/bin/CommandCenter.exe] + 0x6540
39: main + 0x194 (0xb4199f21) [/opt/apps/is3EZgrF01/bin/CommandCenter] + 0xf21
40: __launchpad_main_loop + 0xe54 (0xb259) [/usr/bin/launchpad_preloading_preinitializing_daemon] + 0xb259
41: main + 0x486 (0xbcb3) [/usr/bin/launchpad_preloading_preinitializing_daemon] + 0xbcb3
42: __libc_start_main + 0x114 (0xb6b946e8) [/lib/libc.so.6] + 0x156e8
43: (0xa110) [/usr/bin/launchpad_preloading_preinitializing_daemon] + 0xa110
End of Call Stack

Package Information
Package Name: is3EZgrF01.CommandCenter
Package ID : is3EZgrF01
Version: 1.0.0
Package Type: tpk
App Name: CommandCenter
App ID: is3EZgrF01.CommandCenter
Type: Application
Categories: (NULL)
