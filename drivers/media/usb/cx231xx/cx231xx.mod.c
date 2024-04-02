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
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x37bf01c8, "i2c_mux_add_adapter" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5b64acc, "videobuf_mmap_mapper" },
	{ 0xdc3ef0f1, "v4l2_i2c_new_subdev" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x37a0f757, "i2c_mux_del_adapters" },
	{ 0x1fddb2c0, "usb_reset_endpoint" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x8394210f, "cx2341x_handler_set_50hz" },
	{ 0x7aa82573, "cx2341x_handler_init" },
	{ 0x69bbc473, "videobuf_queue_vmalloc_init" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7adb1ab2, "videobuf_streamon" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xdb43f398, "videobuf_iolock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x671f107d, "i2c_mux_alloc" },
	{ 0x9b87ca1f, "v4l2_s_ctrl" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x702acb23, "videobuf_qbuf" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xf52ae23c, "v4l2_event_pending" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xa42d03d6, "videobuf_querybuf" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x101c6930, "videobuf_read_stream" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x80bae4b5, "videobuf_stop" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x4e20798a, "cx2341x_handler_setup" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xec006616, "videobuf_vmalloc_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5dbd92df, "videobuf_to_vmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x86fe1e9d, "videobuf_dqbuf" },
	{ 0xa4736227, "videobuf_queue_is_busy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0xa98781ce, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x47e1ce5c, "videobuf_reqbufs" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x57ad6881, "v4l2_fh_del" },
	{ 0xc235c60d, "v4l2_ctrl_add_handler" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x8937f82, "v4l2_ctrl_radio_filter" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xef26b1c1, "videobuf_read_stop" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x2bdca92, "videobuf_poll_stream" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeed87698, "v4l2_fh_exit" },
	{ 0x7b303aa, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,i2c-mux,v4l2-common,tveeprom,cx2341x,videobuf-vmalloc,rc-core";

MODULE_ALIAS("usb:v1D19p6109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p5A3Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p589Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApC039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d400[0-1]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v199Ep8002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "11AB4AD673606AB590CF4ED");
MODULE_INFO(rhelversion, "8.0");
