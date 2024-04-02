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
	{ 0x4da9eb53, "team_mode_unregister" },
	{ 0x9e832fa1, "team_mode_register" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x386013b4, "team_options_register" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9d6c40f, "netpoll_send_skb_on_dev" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdc00a6d, "bpf_prog_create" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x5aee614e, "bpf_prog_destroy" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xd97bcb39, "team_options_unregister" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9df9cbe8, "team_options_change_check" },
	{ 0xb427af8f, "team_option_inst_set_change" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";


MODULE_INFO(srcversion, "46224997DE6CF187EE0E35D");
MODULE_INFO(rhelversion, "8.0");
