#include "EntityManager.h"

EntityManager* EntityManager::mEM = 0;


EntityManager::EntityManager()
{

	if(mEM == 0){
	mEM = new EntityManager();
	
	}
	return mEM;
}


EntityManager::~EntityManager(){
	while(!mEntities.empty()){
		delete mEntities.back();
		mEntities.pop_back();
	}
}

void EntityManager::Add(Entity* Ent){

	mEntities.push_back(Ent);
}


void EntityManager::Draw() {

	for(EntityVector::size_type i = 0; i < mEntities.size(); i++){

		mEntities[i]->draw();
	}
}

void EntityManager::Update(){
	
	for(EntityVector::size_type i = 0; i < mEntities.size(); i++){
	
		mEntities[i]->update();
	}
}

void EntityManager::AliveCheck(){

	for(EntityVector::size_type i = 0; i < mEntities.size(); i++){
	
		if(mEntities[i]->getHP() <= 0){
			mEntities[i] = mEntities.back();
			mEntities.pop_back();

		}
	}
}

void EntityManager::Collision(){
	for(EntityVector::size_type i = 0; i<mEntities.size();i++){
		for(EntityVector::size_type j = 0; j<mEntities.size();j++){

		}
	}
}