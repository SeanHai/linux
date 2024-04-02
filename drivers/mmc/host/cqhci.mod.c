#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x703b8f8f, "dmam_free_coherent" },
	{ 0x5ad1f300, "mmc_cqe_request_done" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x82a262b0, "platform_get_resource_byname" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x92e39ee2, "devm_ioremap" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x36b3d463, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";


MODULE_INFO(srcversion, "ED55DB2734D34752B6B10A7");
MODULE_INFO(rhelversion, "8.0");
