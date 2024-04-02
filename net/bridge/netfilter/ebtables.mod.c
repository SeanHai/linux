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
	{ 0x532b50b1, "xt_unregister_target" },
	{ 0x402b8281, "__request_module" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x754d539c, "strlen" },
	{ 0x994ed72, "xt_check_target" },
	{ 0x5b46395d, "xt_compat_match_offset" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfb922dd3, "xt_compat_target_offset" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2b87aa6b, "nf_unregister_net_hooks" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x1f647f51, "xt_register_target" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x31d67905, "nf_register_net_hooks" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa9d22b83, "nf_unregister_sockopt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0a3cfe, "xt_request_find_match" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xca317631, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25b89fac, "xt_check_match" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xde6f16a3, "audit_log" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa53d8849, "nf_register_sockopt" },
	{ 0xb2195309, "xt_find_match" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D01BAABECB081BC9446F747");
MODULE_INFO(rhelversion, "8.0");
