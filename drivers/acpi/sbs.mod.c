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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x87bd07bd, "acpi_smbus_register_callback" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x27e1a049, "printk" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x8368044b, "power_supply_register" },
	{ 0x91715312, "sprintf" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x37c5895d, "power_supply_get_drvdata" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc768d450, "power_supply_unregister" },
	{ 0x1c8984c7, "acpi_smbus_unregister_callback" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x96eb492d, "acpi_smbus_write" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4f6c2360, "acpi_smbus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sbshc";

MODULE_ALIAS("acpi*:ACPI0002:*");

MODULE_INFO(srcversion, "6B2072A518789ECD6640D11");
MODULE_INFO(rhelversion, "8.0");
