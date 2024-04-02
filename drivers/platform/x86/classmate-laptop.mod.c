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
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x91715312, "sprintf" },
	{ 0xa916b694, "strnlen" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xfe7843b, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";

MODULE_ALIAS("acpi*:ACCE0000:*");
MODULE_ALIAS("acpi*:ACCE0001:*");
MODULE_ALIAS("acpi*:TBLT0000:*");
MODULE_ALIAS("acpi*:IPML200:*");
MODULE_ALIAS("acpi*:FNBT0000:*");

MODULE_INFO(srcversion, "F37926623F7BF9D16EAE4E2");
MODULE_INFO(rhelversion, "8.0");
