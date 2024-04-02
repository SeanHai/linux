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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x604651e7, "genl_register_family" },
	{ 0x754d539c, "strlen" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xcc20531d, "bpf_trace_run5" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xed946a48, "init_net" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x28318305, "snprintf" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B979292FAC591120E2283C6");
MODULE_INFO(rhelversion, "8.0");
