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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66b4511e, "_vb2_fop_release" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xdc3ef0f1, "v4l2_i2c_new_subdev" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x2b7d8b68, "dvb_frontend_suspend" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xa85d9b2, "dvb_frontend_resume" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0xf24e1f67, "vb2_vmalloc_memops" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xca72a3cb, "vb2_plane_vaddr" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x71cd795d, "vb2_ioctl_prepare_buf" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xefe0d93, "tveeprom_read" },
	{ 0xc84a019d, "vb2_ioctl_create_bufs" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xe8c84774, "vb2_ioctl_expbuf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0xae35f2d5, "vb2_queue_release" },
	{ 0x8024e827, "v4l2_device_put" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0xba1fd87e, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,dvb-core,v4l2-common,tveeprom,videobuf2-vmalloc,videobuf2-common";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B0C36312CDCFA1A4C50FC36");
MODULE_INFO(rhelversion, "8.0");
