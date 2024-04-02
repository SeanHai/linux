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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x28318305, "snprintf" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe9c9fc64, "__acpi_handle_debug" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeccd3e0c, "acpi_handle_printk" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:SMBUS01:*");
MODULE_ALIAS("acpi*:SMBUSIBM:*");
MODULE_ALIAS("acpi*:SMB0001:*");

MODULE_INFO(srcversion, "106AA990BC72F54E400CAC6");
MODULE_INFO(rhelversion, "8.0");
