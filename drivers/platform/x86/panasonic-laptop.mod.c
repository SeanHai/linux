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
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xf789deff, "input_register_device" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x28318305, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap";

MODULE_ALIAS("acpi*:MAT0012:*");
MODULE_ALIAS("acpi*:MAT0013:*");
MODULE_ALIAS("acpi*:MAT0018:*");
MODULE_ALIAS("acpi*:MAT0019:*");

MODULE_INFO(srcversion, "12E39F14D64607BA368C541");
MODULE_INFO(rhelversion, "8.0");
