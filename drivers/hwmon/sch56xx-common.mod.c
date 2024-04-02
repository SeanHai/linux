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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x27e1a049, "printk" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x187b257e, "platform_device_add_resources" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x6978a86b, "acpi_check_resource_conflict" },
	{ 0x27a0b904, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06CCAC6A854FEF206B33E2C");
MODULE_INFO(rhelversion, "8.0");
