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
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x4e7567f4, "saa7146_unregister_extension" },
	{ 0x447aed2b, "saa7146_register_extension" },
	{ 0x771495cb, "ttpci_budget_init_hooks" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
	{ 0xbfa753d4, "saa7146_set_hps_source_and_sync" },
	{ 0xa8abf65a, "saa7146_register_device" },
	{ 0x79e92510, "saa7146_vv_init" },
	{ 0xa1be2409, "ttpci_budget_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc93d899a, "ttpci_budget_debiwrite" },
	{ 0xacdd1296, "dvb_frontend_reinitialise" },
	{ 0xa882a1e3, "ttpci_budget_debiread" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf4c54e3b, "ttpci_budget_set_video_port" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x402b8281, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x923bebb4, "saa7146_vv_release" },
	{ 0xbfc578de, "saa7146_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0xbbe233eb, "saa7146_setgpio" },
	{ 0x37a0cba, "kfree" },
	{ 0xddf0385a, "ttpci_budget_deinit" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x79b67ec8, "ttpci_budget_irq10_handler" },
	{ 0x27e1a049, "printk" },
	{ 0x7948c222, "budget_debug" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,budget-core,dvb-core,saa7146_vv";

MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F56bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000015bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Dbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000003Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000021bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000022bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000028bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000023bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000030bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001154bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001155bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001156bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001176bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001157bc*sc*i*");

MODULE_INFO(srcversion, "214FD502BBCB21A4C68B4DA");
MODULE_INFO(rhelversion, "8.0");
