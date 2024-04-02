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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc2865c19, "mei_irq_write_handler" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xffbde306, "mei_write_is_idle" },
	{ 0x115d9e7a, "mei_device_init" },
	{ 0xc0d8df72, "__pm_runtime_use_autosuspend" },
	{ 0xf946d9ad, "__pm_runtime_suspend" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x2fcfc952, "__tracepoint_mei_pci_cfg_read" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x75e2086f, "mei_restart" },
	{ 0x3646edd, "__tracepoint_mei_reg_write" },
	{ 0x4f3237ad, "mei_hbm_pg_resume" },
	{ 0x2a1a33d8, "mei_irq_compl_handler" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xfc9331c9, "pm_runtime_allow" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x9aafb724, "__tracepoint_mei_reg_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa283da82, "mei_register" },
	{ 0xbc0141f5, "mei_stop" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x8cc2901a, "mei_irq_read_handler" },
	{ 0x5225ccb, "mei_cancel_work" },
	{ 0xe6478472, "_dev_info" },
	{ 0x7058c48b, "mei_deregister" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xcdbd8fd5, "mei_hbm_pg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe8ebfcf, "mei_start" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x60b34916, "dev_pm_domain_set" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mei";

MODULE_ALIAS("pci:v00008086d00002974sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002984sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002994sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A74sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001DBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000319Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A364sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA2EF099C74A2EE072DD446");
MODULE_INFO(rhelversion, "8.0");
