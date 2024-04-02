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
	{ 0x5eba9410, "__request_region" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x30a580aa, "umc_device_create" },
	{ 0x583f2fc, "umc_device_unregister" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x29d4f0ff, "umc_device_register" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=umc";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Dsc10i10*");

MODULE_INFO(srcversion, "326E484D43ACA0D54B76C8E");
MODULE_INFO(rhelversion, "8.0");
