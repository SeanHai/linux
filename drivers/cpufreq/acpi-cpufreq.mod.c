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
	{ 0xbc2031de, "acpi_processor_get_bios_limit" },
	{ 0x964c24ca, "cpufreq_generic_frequency_table_verify" },
	{ 0xee73e7c7, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xdd17ebf2, "cpufreq_unregister_driver" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x9473118e, "cpufreq_register_driver" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x3ecc1d21, "acpi_processor_preregister_performance" },
	{ 0x383a8c35, "zalloc_cpumask_var_node" },
	{ 0x618911fc, "numa_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7cd6f042, "cpufreq_get_current_driver" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xd6b33026, "cpu_khz" },
	{ 0xcbb5c3b2, "acpi_processor_notify_smm" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xec327a3, "cpu_core_map" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x40cf6820, "cpu_sibling_map" },
	{ 0xfb578fc5, "memset" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x69acdf38, "memcpy" },
	{ 0x45109dde, "acpi_processor_register_performance" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x177847e, "cpu_info" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x5541ea93, "on_each_cpu" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x7cd7b048, "cpufreq_cpu_get_raw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcca03002, "cpu_bit_bitmap" },
	{ 0xa3eded0c, "smp_call_function_many" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x2d6138d0, "cpufreq_show_cpus" },
	{ 0x91715312, "sprintf" },
	{ 0xb654ef65, "acpi_os_read_port" },
	{ 0xbe49252c, "acpi_os_write_port" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbc2fd273, "smp_call_function_any" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x4c07a7e0, "acpi_processor_unregister_performance" },
	{ 0x27e1a049, "printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0016*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00E8*");

MODULE_INFO(srcversion, "D67D230162F5D8D2A35F1E4");
MODULE_INFO(rhelversion, "8.0");
