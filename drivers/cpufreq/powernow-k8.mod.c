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
	{ 0x8655ebed, "cpufreq_generic_attr" },
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0x964c24ca, "cpufreq_generic_frequency_table_verify" },
	{ 0xdd17ebf2, "cpufreq_unregister_driver" },
	{ 0x402b8281, "__request_module" },
	{ 0xf99d347e, "node_states" },
	{ 0x9473118e, "cpufreq_register_driver" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0xcbb5c3b2, "acpi_processor_notify_smm" },
	{ 0x69acdf38, "memcpy" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x45109dde, "acpi_processor_register_performance" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xec327a3, "cpu_core_map" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xaa47f08a, "cpufreq_freq_transition_end" },
	{ 0xfdd4c4e0, "cpufreq_freq_transition_begin" },
	{ 0x18032454, "cpufreq_cpu_put" },
	{ 0x495b9555, "cpufreq_cpu_get" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf82f3657, "work_on_cpu" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");

MODULE_INFO(srcversion, "81ACC710AFF7064DBF62F05");
MODULE_INFO(rhelversion, "8.0");
