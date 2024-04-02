#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaa06dc1, "acpi_lpat_raw_to_temp" },
	{ 0x482bc218, "thermal_zone_device_register" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdb63a944, "acpi_lpat_get_conversion_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x7de65a03, "acpi_lpat_free_conversion_table" },
	{ 0x28318305, "snprintf" },
	{ 0x3111f1ae, "thermal_zone_device_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2C2BB727ED085FEA904F5CF");
MODULE_INFO(rhelversion, "8.0");
