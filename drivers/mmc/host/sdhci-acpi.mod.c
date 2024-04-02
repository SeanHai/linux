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
	{ 0x4a6c872, "sdhci_set_uhs_signaling" },
	{ 0x9cadc3c8, "sdhci_reset" },
	{ 0x1ba75b02, "sdhci_set_bus_width" },
	{ 0x995fd3e7, "sdhci_set_clock" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0xe50f6b37, "sdhci_cleanup_host" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x4f8a92c3, "__sdhci_add_host" },
	{ 0x3ef2d28e, "sdhci_setup_host" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb73c3151, "mmc_gpiod_request_cd" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa1a888e1, "devm_ioremap_nocache" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xeba3aa83, "sdhci_alloc_host" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x28e09af1, "iosf_mbi_available" },
	{ 0xe8f5b243, "acpi_device_fix_up_power" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe287b010, "mmc_gpio_get_cd" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x23e9e032, "sdhci_start_signal_voltage_switch" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x1c70658, "sdhci_set_ios" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x239082ef, "__sdhci_read_caps" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x771c3b21, "sdhci_free_host" },
	{ 0xf470c319, "sdhci_remove_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbf4bea32, "sdhci_suspend_host" },
	{ 0x43d5d049, "sdhci_resume_host" },
	{ 0xf7609ec3, "sdhci_runtime_suspend_host" },
	{ 0xda976aee, "sdhci_runtime_resume_host" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x7a88da87, "iosf_mbi_write" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci,mmc_core";

MODULE_ALIAS("acpi*:80865ACA:*");
MODULE_ALIAS("acpi*:80865ACC:*");
MODULE_ALIAS("acpi*:80865AD0:*");
MODULE_ALIAS("acpi*:80860F14:*");
MODULE_ALIAS("acpi*:80860F16:*");
MODULE_ALIAS("acpi*:INT33BB:*");
MODULE_ALIAS("acpi*:INT33C6:*");
MODULE_ALIAS("acpi*:INT3436:*");
MODULE_ALIAS("acpi*:INT344D:*");
MODULE_ALIAS("acpi*:PNP0D40:*");
MODULE_ALIAS("acpi*:QCOM8051:*");
MODULE_ALIAS("acpi*:QCOM8052:*");
MODULE_ALIAS("acpi*:AMDI0040:*");

MODULE_INFO(srcversion, "9F8D7393B4093430006DC1E");
MODULE_INFO(rhelversion, "8.0");
