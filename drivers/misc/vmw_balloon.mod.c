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
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x783b80f4, "x86_hyper_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb572e830, "vmci_doorbell_create" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x27e1a049, "printk" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x5e949e0a, "vmci_doorbell_destroy" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vmci";


MODULE_INFO(srcversion, "8D83A9B5F6203134473E47A");
MODULE_INFO(rhelversion, "8.0");
