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
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x27e1a049, "printk" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x8d710940, "pci_match_id" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xe484e35f, "ioread32" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00007443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C30668E5994AD4D1DB346BE");
MODULE_INFO(rhelversion, "8.0");
