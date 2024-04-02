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
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xfe7843b, "input_event" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0xf24e1f67, "vb2_vmalloc_memops" },
	{ 0x3604b5df, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xca72a3cb, "vb2_plane_vaddr" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdf71f10b, "v4l2_ctrl_new_custom" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5b96593b, "vb2_fop_release" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x37b90fbc, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0x8024e827, "v4l2_device_put" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xba1fd87e, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "45044496615B03126E60D68");
MODULE_INFO(rhelversion, "8.0");
