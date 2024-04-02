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
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x4e7567f4, "saa7146_unregister_extension" },
	{ 0x447aed2b, "saa7146_register_extension" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x79b67ec8, "ttpci_budget_irq10_handler" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
	{ 0x771495cb, "ttpci_budget_init_hooks" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xa1be2409, "ttpci_budget_init" },
	{ 0x7948c222, "budget_debug" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xddf0385a, "ttpci_budget_deinit" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x402b8281, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf4c54e3b, "ttpci_budget_set_video_port" },
	{ 0x80b9f933, "dvb_ca_en50221_frda_irq" },
	{ 0xfb04bc86, "dvb_ca_en50221_camready_irq" },
	{ 0xd21dbb5, "dvb_ca_en50221_camchange_irq" },
	{ 0xbbe233eb, "saa7146_setgpio" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0xa882a1e3, "ttpci_budget_debiread" },
	{ 0xc93d899a, "ttpci_budget_debiwrite" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,budget-core,rc-core,dvb-core";

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Fbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001012bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001017bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Bbc*sc*i*");

MODULE_INFO(srcversion, "374AE153628E94FB556BA1F");
MODULE_INFO(rhelversion, "8.0");
