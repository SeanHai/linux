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
	{ 0x310b4dfb, "sst_context_init" },
	{ 0xa1a888e1, "devm_ioremap_nocache" },
	{ 0x994e7424, "sst_context_cleanup" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xad252793, "sst_alloc_drv_context" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc1a9cae8, "intel_sst_pm" },
	{ 0x47906db5, "sst_configure_runtime_pm" },
	{ 0x21faaa93, "snd_soc_acpi_find_machine" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xe6478472, "_dev_info" },
	{ 0xff27c79e, "snd_soc_acpi_intel_cherrytrail_machines" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x69726767, "snd_soc_acpi_intel_baytrail_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-intel-sst-core,snd-soc-acpi,snd-soc-acpi-intel-match";

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "AC6531E82193A99CC9F9EC3");
MODULE_INFO(rhelversion, "8.0");
