#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xa831d829, "vb2_ioctl_reqbufs" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xe9d8dc85, "v4l2_event_queue_fh" },
	{ 0x754d539c, "strlen" },
	{ 0xd0d1a5e4, "vb2_mmap" },
	{ 0x9a17ff41, "usb_debug_root" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0x28cde093, "no_llseek" },
	{ 0x4a06351b, "vb2_create_bufs" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x4c1d009, "usb_enable_autosuspend" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xfe7843b, "input_event" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0xf24e1f67, "vb2_vmalloc_memops" },
	{ 0x3604b5df, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x5f308ff8, "v4l2_event_subscribe" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0xca72a3cb, "vb2_plane_vaddr" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc99a2367, "vb2_qbuf" },
	{ 0x71cd795d, "vb2_ioctl_prepare_buf" },
	{ 0xc84a019d, "vb2_ioctl_create_bufs" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xcd4cc86a, "vb2_querybuf" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0x35dd7c5c, "vb2_streamon" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x5b96593b, "vb2_fop_release" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x89e0b0f9, "vb2_expbuf" },
	{ 0xf789deff, "input_register_device" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9760e29c, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xcf5d91a1, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0xab59bddc, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x236a0c89, "usb_match_one_id" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0x57ad6881, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x28318305, "snprintf" },
	{ 0xf0488fa2, "vb2_poll" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x2428061c, "usb_get_current_frame_number" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0xae35f2d5, "vb2_queue_release" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x89bb9140, "vb2_streamoff" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x7da99cdd, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe0024da3, "usb_put_intf" },
	{ 0xeed87698, "v4l2_fh_exit" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xba1fd87e, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "CC5A78A483B9D9CF913A1D8");
MODULE_INFO(rhelversion, "8.0");
