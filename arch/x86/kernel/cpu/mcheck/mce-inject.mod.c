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
	{ 0xd5272c1b, "simple_attr_release" },
	{ 0x99824fdf, "simple_attr_write" },
	{ 0x388c5d90, "simple_attr_read" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x9a8a0ca3, "__register_nmi_handler" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x690924ff, "alloc_cpumask_var" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xff2ce747, "machine_check_poll" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc7e1cc1c, "injectm" },
	{ 0xecad3b34, "do_machine_check" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x738fe32b, "amd_get_nodes_per_socket" },
	{ 0xd1f6c5f3, "smp_num_siblings" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xe8e202b6, "node_to_amd_nb" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x76d951cd, "mce_inject_log" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x5f56663b, "rdmsrl_on_cpu" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4CFEE67E8743BC2879CA48D");
MODULE_INFO(rhelversion, "8.0");
