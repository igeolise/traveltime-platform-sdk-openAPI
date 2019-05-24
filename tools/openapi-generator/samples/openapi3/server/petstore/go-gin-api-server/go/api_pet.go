/*
 * OpenAPI Petstore
 *
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * API version: 1.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package petstoreserver

import (
	"net/http"

	"github.com/gin-gonic/gin"
)

// AddPet - Add a new pet to the store
func AddPet(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// DeletePet - Deletes a pet
func DeletePet(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// FindPetsByStatus - Finds Pets by status
func FindPetsByStatus(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// FindPetsByTags - Finds Pets by tags
func FindPetsByTags(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// GetPetById - Find pet by ID
func GetPetById(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// UpdatePet - Update an existing pet
func UpdatePet(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// UpdatePetWithForm - Updates a pet in the store with form data
func UpdatePetWithForm(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// UploadFile - uploads an image
func UploadFile(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}

// UploadFileWithRequiredFile - uploads an image (required)
func UploadFileWithRequiredFile(c *gin.Context) {
	c.JSON(http.StatusOK, gin.H{})
}
