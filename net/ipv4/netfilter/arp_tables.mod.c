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
	{ 0x402b8281, "__request_module" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x5c2c0e1e, "xt_unregister_table" },
	{ 0x24c8e482, "xt_copy_counters_from_user" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x994ed72, "xt_check_target" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x63bf592e, "xt_compat_target_to_user" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x96703669, "xt_proto_fini" },
	{ 0x28808313, "xt_table_unlock" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xfb922dd3, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6b51e125, "xt_find_table_lock" },
	{ 0x6ed7bcf2, "xt_replace_table" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x79b7de0d, "xt_proto_init" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x9be96bd6, "xt_register_table" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4b533980, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0xa5a1612a, "xt_compat_target_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa9d22b83, "nf_unregister_sockopt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x505396e6, "xt_request_find_table_lock" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca317631, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0xe50d2ce0, "xt_check_table_hooks" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xa53d8849, "nf_register_sockopt" },
	{ 0x555c3243, "xt_alloc_table_info" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa48b3a97, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D121DB7BD73C1FC5BB2C95E");
MODULE_INFO(rhelversion, "8.0");
