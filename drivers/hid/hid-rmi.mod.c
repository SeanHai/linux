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
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0xd688fdce, "rmi_driver_resume" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0x6626afca, "down" },
	{ 0xf56e7199, "rmi_register_transport_device" },
	{ 0xcf2a6966, "up" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xdb16f933, "rmi_set_attn_data" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x757b3161, "irq_create_mapping" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0xe8ea9f09, "__irq_domain_add" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x8df2a7e4, "irq_set_chip_and_handler_name" },
	{ 0x6d4cd669, "dummy_irq_chip" },
	{ 0xe2f860d, "handle_simple_irq" },
	{ 0x4f7f8511, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x99e44e4a, "irq_find_mapping" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x51d4ad54, "rmi_unregister_transport_device" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfe7843b, "input_event" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x72210796, "rmi_driver_suspend" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rmi_core";

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b*g0100v*p*");

MODULE_INFO(srcversion, "2EDA5D7BF9118422A2E3584");
MODULE_INFO(rhelversion, "8.0");
