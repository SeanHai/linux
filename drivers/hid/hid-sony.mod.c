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
	{ 0x32178f3f, "ida_destroy" },
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xa390f2f4, "hid_validate_values" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x887e3fda, "power_supply_powers" },
	{ 0x8368044b, "power_supply_register" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x1e429171, "input_mt_init_slots" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x23647549, "__hid_request" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xc768d450, "power_supply_unregister" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0x480ba3d3, "input_mt_report_slot_state" },
	{ 0xa1654d34, "input_mt_sync_frame" },
	{ 0xfe7843b, "input_event" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x37c5895d, "power_supply_get_drvdata" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x28318305, "snprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "B9FA4C871D3F19AAB4905DC");
MODULE_INFO(rhelversion, "8.0");
