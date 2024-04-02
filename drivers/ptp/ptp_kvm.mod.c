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
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0x8677f369, "pvclock_get_pvti_cpu0_va" },
	{ 0x30cf804f, "slow_virt_to_phys" },
	{ 0xe9ce931a, "kvm_para_available" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xed40c481, "kvm_clock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc861d304, "get_device_system_crosststamp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0366DFDBF8C300F5ABDD9D6");
MODULE_INFO(rhelversion, "8.0");
