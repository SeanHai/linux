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
	{ 0x26f93bfe, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6bdf1bce, "dev_attr_sw_activity" },
	{ 0xefd61b23, "ata_port_printk" },
	{ 0x7844ce69, "sata_pmp_error_handler" },
	{ 0x822d2c88, "sata_link_scr_lpm" },
	{ 0x3cdecf22, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0xee70ea31, "ata_port_desc" },
	{ 0x386b1c4d, "dev_attr_ncq_prio_enable" },
	{ 0x48fb427d, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x5070a8b4, "sata_pmp_port_ops" },
	{ 0xd033bed0, "ata_ehi_push_desc" },
	{ 0xfb578fc5, "memset" },
	{ 0x170a3b9d, "ata_dev_set_feature" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0x1c6431ec, "ata_wait_register" },
	{ 0xd1803fe8, "ata_std_qc_defer" },
	{ 0x10b2de4, "ata_host_start" },
	{ 0x9f4dc2, "ata_link_abort" },
	{ 0x8cb374c1, "dev_attr_unload_heads" },
	{ 0x153fc24b, "ata_msleep" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x34cef4cb, "devm_kfree" },
	{ 0xecbc643e, "ata_ehi_clear_desc" },
	{ 0x6a7b6976, "sata_link_hardreset" },
	{ 0xe6478472, "_dev_info" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x77aa6644, "ata_host_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe048db9e, "dev_attr_em_message_type" },
	{ 0x7b258b4, "sata_lpm_ignore_phy_events" },
	{ 0x1ec97303, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4bd0aaef, "ata_link_printk" },
	{ 0xa0b67128, "ata_wait_after_reset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x586694d0, "ata_qc_complete_multiple" },
	{ 0xab0c5220, "ata_link_next" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x53efedb3, "ata_std_postreset" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x28318305, "snprintf" },
	{ 0x794bb007, "dev_attr_link_power_management_policy" },
	{ 0x8fe95700, "ata_port_abort" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xa9f9f640, "sata_async_notification" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";


MODULE_INFO(srcversion, "7192F7F956FF9926BC8FA2E");
MODULE_INFO(rhelversion, "8.0");
