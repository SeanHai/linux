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
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x5296e7b0, "devm_input_allocate_device" },
	{ 0xd7d5f9f1, "devm_kasprintf" },
	{ 0x28318305, "snprintf" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9d443d45, "input_ff_create" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x887e3fda, "power_supply_powers" },
	{ 0x4ea6c44f, "devm_power_supply_register" },
	{ 0x91715312, "sprintf" },
	{ 0x9c391c4b, "devm_kmemdup" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x78f8bd35, "hid_field_extract" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0xfe7843b, "input_event" },
	{ 0x9ac4222d, "input_mt_get_slot_by_key" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x39c1933d, "power_supply_changed" },
	{ 0x37c5895d, "power_supply_get_drvdata" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5495392, "hid_debug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe6478472, "_dev_info" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");

MODULE_INFO(srcversion, "13613348D165F4B9F7163B5");
MODULE_INFO(rhelversion, "8.0");
