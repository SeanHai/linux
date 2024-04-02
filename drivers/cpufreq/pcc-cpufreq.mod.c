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
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xdd17ebf2, "cpufreq_unregister_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x9473118e, "cpufreq_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf10de535, "ioread8" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xaa47f08a, "cpufreq_freq_transition_end" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7bb50b88, "acpi_write" },
	{ 0x67c13ea0, "acpi_read" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfdd4c4e0, "cpufreq_freq_transition_begin" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5151b57e, "processors" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");

MODULE_INFO(srcversion, "2C71D8C1C42AAC08EC942AE");
MODULE_INFO(rhelversion, "8.0");
