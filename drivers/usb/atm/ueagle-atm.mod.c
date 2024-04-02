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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x3604b5df, "usb_string" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xdb099315, "usbatm_usb_probe" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa6bc31e5, "kernel_param_unlock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xac9d6a61, "kernel_param_lock" },
	{ 0xc3a6e1c1, "crc32_be" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0xf7d6636f, "current_task" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x46e98e19, "atm_dev_signal_change" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x317a8ad6, "flush_work" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x91715312, "sprintf" },
	{ 0x28318305, "snprintf" },
	{ 0xe6478472, "_dev_info" },
	{ 0xa59c742b, "usbatm_usb_disconnect" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbatm,atm";

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF68374A19274B8ED6B6EE2");
MODULE_INFO(rhelversion, "8.0");
