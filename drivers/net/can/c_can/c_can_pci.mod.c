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
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x72964271, "register_c_can_dev" },
	{ 0xdffc0f98, "alloc_c_can_dev" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xbaf7198b, "free_c_can_dev" },
	{ 0xda7904f9, "unregister_c_can_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=c_can";

MODULE_ALIAS("pci:v0000104Ad0000CC11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008818sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7210C9FF9C7FA9DAFD98D84");
MODULE_INFO(rhelversion, "8.0");
