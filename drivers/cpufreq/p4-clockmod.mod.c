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
	{ 0x964c24ca, "cpufreq_generic_frequency_table_verify" },
	{ 0xdd17ebf2, "cpufreq_unregister_driver" },
	{ 0x9473118e, "cpufreq_register_driver" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x27e1a049, "printk" },
	{ 0xc9216a82, "recalibrate_cpu_khz" },
	{ 0x2b67f096, "speedstep_get_frequency" },
	{ 0xd7ab2c0c, "speedstep_detect_processor" },
	{ 0x69acdf38, "memcpy" },
	{ 0x40cf6820, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x177847e, "cpu_info" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speedstep-lib";


MODULE_INFO(srcversion, "4E10825A423DC7D43132B3A");
MODULE_INFO(rhelversion, "8.0");
