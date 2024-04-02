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
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x28318305, "snprintf" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xf10de535, "ioread8" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x91715312, "sprintf" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000025F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3E1B23F0EAABE10D746A83D");
MODULE_INFO(rhelversion, "8.0");
