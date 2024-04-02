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
	{ 0x8bbc54e0, "cqhci_resume" },
	{ 0xf470c319, "sdhci_remove_host" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x118edebd, "sdhci_set_power" },
	{ 0xf570d6aa, "mmc_detect_change" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x7b4d7029, "sdhci_cqe_enable" },
	{ 0x5a891fb7, "mmc_send_tuning" },
	{ 0xeba3aa83, "sdhci_alloc_host" },
	{ 0x43d5d049, "sdhci_resume_host" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xe50f6b37, "sdhci_cleanup_host" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfc9331c9, "pm_runtime_allow" },
	{ 0xe8f5b243, "acpi_device_fix_up_power" },
	{ 0x7a23ce6d, "pm_runtime_forbid" },
	{ 0x53c9342c, "sdhci_add_host" },
	{ 0x771c3b21, "sdhci_free_host" },
	{ 0xd9f9235e, "devm_gpio_free" },
	{ 0x24cead65, "sdhci_execute_tuning" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x995fd3e7, "sdhci_set_clock" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4f8a92c3, "__sdhci_add_host" },
	{ 0x42b1c96a, "sdhci_cqe_disable" },
	{ 0xe4f79e95, "sdhci_dumpregs" },
	{ 0x8ba5f632, "cqhci_suspend" },
	{ 0x7bcafccf, "gpiod_direction_input" },
	{ 0x3ef2d28e, "sdhci_setup_host" },
	{ 0xec460791, "gpiod_direction_output_raw" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x1b0519d6, "device_wakeup_enable" },
	{ 0xf7609ec3, "sdhci_runtime_suspend_host" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xda976aee, "sdhci_runtime_resume_host" },
	{ 0x4f87a64c, "device_wakeup_disable" },
	{ 0xbf4bea32, "sdhci_suspend_host" },
	{ 0xe287b010, "mmc_gpio_get_cd" },
	{ 0xe6478472, "_dev_info" },
	{ 0xcb15eee9, "sdhci_pci_get_data" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2f9c1e9b, "mmc_gpio_set_cd_wake" },
	{ 0x9cadc3c8, "sdhci_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xf81b54dc, "cqhci_irq" },
	{ 0x4a6c872, "sdhci_set_uhs_signaling" },
	{ 0xa848e02c, "gpiod_to_irq" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x3a0e07d2, "gpiod_set_raw_value_cansleep" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xeea94945, "cqhci_init" },
	{ 0xb73c3151, "mmc_gpiod_request_cd" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x1a8c3ad8, "devm_gpio_request" },
	{ 0x23e9e032, "sdhci_start_signal_voltage_switch" },
	{ 0xd04949, "sdhci_cqe_irq" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x1ba75b02, "sdhci_set_bus_width" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cqhci,sdhci,mmc_core";

MODULE_ALIAS("pci:v00001180d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d00000843sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001180d0000E823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000550sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001524d00000751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002382sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002391sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00002392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d000095D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000084Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000880Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv00001093sd00007884bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F15sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F16sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002294sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002295sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000008E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005ACAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001217d00008621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016E6d00000670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc08sc05i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc08sc05i*");

MODULE_INFO(srcversion, "E538F6612283D5C20A7B6EF");
MODULE_INFO(rhelversion, "8.0");
