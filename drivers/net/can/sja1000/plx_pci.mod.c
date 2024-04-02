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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x524ff4c1, "register_sja1000dev" },
	{ 0x946bf5ab, "alloc_sja1000dev" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xf10de535, "ioread8" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x17325807, "free_sja1000dev" },
	{ 0xae1571d5, "unregister_sja1000dev" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x848d372e, "iowrite8" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sja1000";

MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc02sc80i00*");
MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc07sc80i00*");
MODULE_ALIAS("pci:v000010B5d00009050sv000012FEsd00000004bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd0000010Bbc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd00000501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000009bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000200bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv*sd00002540bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001498d0000032Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012C4sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv0000E1C5sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00000100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADC1A8128035CC3F6E0A5D7");
MODULE_INFO(rhelversion, "8.0");
