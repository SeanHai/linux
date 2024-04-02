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
	{ 0x79b67ec8, "ttpci_budget_irq10_handler" },
	{ 0x4e7567f4, "saa7146_unregister_extension" },
	{ 0x447aed2b, "saa7146_register_extension" },
	{ 0x771495cb, "ttpci_budget_init_hooks" },
	{ 0xa1be2409, "ttpci_budget_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x402b8281, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x27e1a049, "printk" },
	{ 0xbbe233eb, "saa7146_setgpio" },
	{ 0x7948c222, "budget_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xddf0385a, "ttpci_budget_deinit" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=budget-core,saa7146,dvb-core";

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001005bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001013bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F60bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F61bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00005F60bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00005F61bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000014C4sd00001020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F52bc*sc*i*");

MODULE_INFO(srcversion, "E71D3CCD72DC9E702C73C20");
MODULE_INFO(rhelversion, "8.0");
