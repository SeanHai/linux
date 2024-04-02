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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0x69bbc473, "videobuf_queue_vmalloc_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7c0d7684, "videobuf_read_one" },
	{ 0x7adb1ab2, "videobuf_streamon" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0xa4736227, "videobuf_queue_is_busy" },
	{ 0x93184044, "v4l2_fh_release" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x5b64acc, "videobuf_mmap_mapper" },
	{ 0xdb43f398, "videobuf_iolock" },
	{ 0xec006616, "videobuf_vmalloc_free" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5dbd92df, "videobuf_to_vmalloc" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x999e8297, "vfree" },
	{ 0xa3ee5fc2, "videobuf_mmap_free" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0x2bdca92, "videobuf_poll_stream" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x5792f848, "strlcpy" },
	{ 0x47e1ce5c, "videobuf_reqbufs" },
	{ 0xa42d03d6, "videobuf_querybuf" },
	{ 0x702acb23, "videobuf_qbuf" },
	{ 0x86fe1e9d, "videobuf_dqbuf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7b303aa, "videobuf_streamoff" },
	{ 0x63e0422c, "video_devdata" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8024e827, "v4l2_device_put" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0xe6478472, "_dev_info" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x27e1a049, "printk" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf-vmalloc,videobuf-core,v4l2-common";

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD9FD02DEE8C78023AA93E7");
MODULE_INFO(rhelversion, "8.0");
