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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x31641526, "seq_release_private" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x1cec7d80, "xt_unregister_matches" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x2431ba19, "xt_register_matches" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2cefa38, "proc_set_user" },
	{ 0xb8099651, "proc_create_data" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x89a5f4cb, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0x9d476313, "__seq_open_private" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "67D529F41E656C4D0D5368B");
MODULE_INFO(rhelversion, "8.0");
