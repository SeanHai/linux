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
	{ 0xf9c388e5, "dev_err" },
	{ 0xfc9331c9, "pm_runtime_allow" },
	{ 0x80fa6c0, "ufshcd_init" },
	{ 0x7a04c724, "ufshcd_alloc_host" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xc72c58fc, "ufshcd_dealloc_host" },
	{ 0x45c3828b, "ufshcd_remove" },
	{ 0x7a23ce6d, "pm_runtime_forbid" },
	{ 0x8eca9af4, "ufshcd_shutdown" },
	{ 0x41fe144, "ufshcd_system_suspend" },
	{ 0x5ff2b86a, "ufshcd_system_resume" },
	{ 0x752c66e1, "ufshcd_runtime_suspend" },
	{ 0xddf0942e, "ufshcd_runtime_resume" },
	{ 0x13cf280c, "ufshcd_runtime_idle" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x634611ac, "ufshcd_dme_set_attr" },
	{ 0x62bd1f70, "ufshcd_dme_get_attr" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd-core";

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC48C37F4D099BE0DAE910F");
MODULE_INFO(rhelversion, "8.0");
