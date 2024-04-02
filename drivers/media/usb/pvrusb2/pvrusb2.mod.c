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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0xdc3ef0f1, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x9b87ca1f, "v4l2_s_ctrl" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xd257960c, "device_register" },
	{ 0xa3294ca4, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf41130f2, "device_move" },
	{ 0x318f7969, "add_timer" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x926b51a9, "usb_urb_ep_type_check" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd0c86c05, "put_device" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x57ad6881, "v4l2_fh_del" },
	{ 0xa20fee2, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0xeed87698, "v4l2_fh_exit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,v4l2-common,tveeprom,videodev,cx2341x";

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BDF74ED3F26F3C4FDE74309");
MODULE_INFO(rhelversion, "8.0");
