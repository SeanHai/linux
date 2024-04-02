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
	{ 0x317a8ad6, "flush_work" },
	{ 0xa3ee5fc2, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5b64acc, "videobuf_mmap_mapper" },
	{ 0xdc3ef0f1, "v4l2_i2c_new_subdev" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x69bbc473, "videobuf_queue_vmalloc_init" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x89cca36d, "usb_reset_configuration" },
	{ 0x7adb1ab2, "videobuf_streamon" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xdb43f398, "videobuf_iolock" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x702acb23, "videobuf_qbuf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0xf52ae23c, "v4l2_event_pending" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0xa42d03d6, "videobuf_querybuf" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x101c6930, "videobuf_read_stream" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xec006616, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5dbd92df, "videobuf_to_vmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x86fe1e9d, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x47e1ce5c, "videobuf_reqbufs" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0x57ad6881, "v4l2_fh_del" },
	{ 0xc235c60d, "v4l2_ctrl_add_handler" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeed87698, "v4l2_fh_exit" },
	{ 0x7b303aa, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,rc-core,v4l2-common,videobuf-vmalloc";

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EDE9A4F2B498B0D5B6D7278");
MODULE_INFO(rhelversion, "8.0");
