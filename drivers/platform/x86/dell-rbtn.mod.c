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
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xfe7843b, "input_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xd70f62b6, "acpi_os_execute" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";

MODULE_ALIAS("acpi*:DELRBTN:*");
MODULE_ALIAS("acpi*:DELLABCE:*");

MODULE_INFO(srcversion, "ACE985CE44B355B79B162C6");
MODULE_INFO(rhelversion, "8.0");
