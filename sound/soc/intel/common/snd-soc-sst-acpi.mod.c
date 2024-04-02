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
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0x890b527b, "snd_soc_acpi_intel_broadwell_machines" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x21faaa93, "snd_soc_acpi_find_machine" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd04abffb, "snd_soc_acpi_intel_haswell_machines" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-acpi-intel-match,snd-soc-acpi";

MODULE_ALIAS("acpi*:INT33C8:*");
MODULE_ALIAS("acpi*:INT3438:*");

MODULE_INFO(srcversion, "F6CCADE86C42A412492DC23");
MODULE_INFO(rhelversion, "8.0");
