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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x11dc4b6d, "bttv_gpio_enable" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ecf4acc, "bttv_write_gpio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xbcf2d2fb, "bttv_read_gpio" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bttv";

MODULE_ALIAS("pci:v0000109Ed00000878sv00000071sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000761bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd0000001Cbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd00000026bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000270Fsd0000FC00bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000771bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB10bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB11bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000D500bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00007063sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000026bc*sc*i*");

MODULE_INFO(srcversion, "9EAFF87CBD32123B49A8FBC");
MODULE_INFO(rhelversion, "8.0");
