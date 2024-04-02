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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x6f96eb55, "v4l2_ctrl_activate" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0x2a582179, "v4l2_device_disconnect" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x93184044, "v4l2_fh_release" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-dv-timings";

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BC77CCE048D70B2AFF6FAF6");
MODULE_INFO(rhelversion, "8.0");
